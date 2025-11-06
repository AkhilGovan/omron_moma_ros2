#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Pose
from std_msgs.msg import Header
from visualization_msgs.msg import Marker, MarkerArray
from tf2_ros import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped
import tf_transformations as tft
import numpy as np

def pose_to_mat(p: Pose):
    T = tft.quaternion_matrix([p.orientation.x, p.orientation.y, p.orientation.z, p.orientation.w])
    T[0, 3] = p.position.x
    T[1, 3] = p.position.y
    T[2, 3] = p.position.z
    return T

def mat_to_pose(T):
    q = tft.quaternion_from_matrix(T)
    out = Pose()
    out.position.x, out.position.y, out.position.z = T[0,3], T[1,3], T[2,3]
    out.orientation.x, out.orientation.y, out.orientation.z, out.orientation.w = q[0], q[1], q[2], q[3]
    return out

class PolarisToRobotBridge(Node):
    """
    - Subscribes: /polaris/tool0_pose, /polaris/tool1_pose (PoseStamped), in camera frame
    - Computes:   target pose in base (tool0 transformed by T_base_cam)
    - Publishes:  /polaris/target_in_base (PoseStamped, frame_id=base)
                  /polaris/markers (MarkerArray) with large X/Y/Z triads + labels
    - Holds last pose on dropouts (markers keep showing last position)
    - Broadcasts static TF: ee_link -> ee_marker at -offset (visual sanity for the 30 cm tag)
    """

    def __init__(self):
        super().__init__('polaris_to_robot_bridge')

        # ===== Parameters =====
        self.declare_parameter('camera_frame', 'polaris_camera')
        self.declare_parameter('base_frame',   'base')
        self.declare_parameter('ee_frame_name','ee_link')
        self.declare_parameter('ee_marker_offset_m', 0.30)
        self.declare_parameter('lost_warn_secs', 0.75)

        # Visibility knobs (big readable markers)
        self.declare_parameter('axis_len',       0.18)  # m
        self.declare_parameter('axis_shaft_d',   0.015) # m
        self.declare_parameter('axis_head_d',    0.030) # m
        self.declare_parameter('axis_head_len',  0.050) # m
        self.declare_parameter('sphere_d',       0.050) # m
        self.declare_parameter('label_scale',    0.070) # m (text height)

        # Calibration: EE pose in CAMERA and BASE, same instant
        self.declare_parameter('ee_in_cam_xyz',   [0.0, 0.0, 0.0])
        self.declare_parameter('ee_in_cam_xyzw',  [0.0, 0.0, 0.0, 1.0])
        self.declare_parameter('ee_in_base_xyz',  [0.0, 0.0, 0.0])
        self.declare_parameter('ee_in_base_xyzw', [0.0, 0.0, 0.0, 1.0])

        # Load params
        p = lambda k: self.get_parameter(k).value
        self.camera_frame = p('camera_frame')
        self.base_frame   = p('base_frame')
        self.ee_frame     = p('ee_frame_name')
        self.ee_offset    = p('ee_marker_offset_m')
        self.lost_warn    = p('lost_warn_secs')

        self.axis_len      = p('axis_len')
        self.axis_shaft_d  = p('axis_shaft_d')
        self.axis_head_d   = p('axis_head_d')
        self.axis_head_len = p('axis_head_len')
        self.sphere_d      = p('sphere_d')
        self.label_scale   = p('label_scale')

        # Build T_base_cam from your measurement pair
        def arr(k): return np.array(p(k), dtype=float)
        ee_cam = Pose()
        ee_cam.position.x, ee_cam.position.y, ee_cam.position.z = arr('ee_in_cam_xyz')
        ee_cam.orientation.x, ee_cam.orientation.y, ee_cam.orientation.z, ee_cam.orientation.w = arr('ee_in_cam_xyzw')
        T_cam_ee  = pose_to_mat(ee_cam)

        ee_base = Pose()
        ee_base.position.x, ee_base.position.y, ee_base.position.z = arr('ee_in_base_xyz')
        ee_base.orientation.x, ee_base.orientation.y, ee_base.orientation.z, ee_base.orientation.w = arr('ee_in_base_xyzw')
        T_base_ee = pose_to_mat(ee_base)

        self.T_base_cam = T_base_ee @ tft.inverse_matrix(T_cam_ee)
        self.get_logger().info('Computed T_base_cam from EE-in-camera & EE-in-base.')

        # Publishers
        self.pub_target_in_base = self.create_publisher(PoseStamped, '/polaris/target_in_base', 10)
        self.pub_markers        = self.create_publisher(MarkerArray, '/polaris/markers', 10)

        # Subscribers
        self.last_tool0 = None  # PoseStamped in CAMERA frame
        self.last_tool1 = None
        self.last_t0_time = self.get_clock().now()
        self.last_t1_time = self.get_clock().now()

        self.create_subscription(PoseStamped, '/polaris/tool0_pose', self._tool0_cb, 10)
        self.create_subscription(PoseStamped, '/polaris/tool1_pose', self._tool1_cb, 10)

        # Static TF: ee_link -> ee_marker (0,0,-offset)
        self.static_tf = StaticTransformBroadcaster(self)
        self._broadcast_ee_marker_static()

        # Republish markers at 10 Hz so RViz keeps them visible
        self.create_timer(0.1, self._tick)

    # ---------- Callbacks ----------
    def _tool0_cb(self, msg: PoseStamped):
        # Transform tool0 (camera) to base
        T_cam_tool0 = pose_to_mat(msg.pose)
        T_base_tool0 = self.T_base_cam @ T_cam_tool0
        out = PoseStamped()
        out.header = Header(stamp=msg.header.stamp, frame_id=self.base_frame)
        out.pose = mat_to_pose(T_base_tool0)
        self.pub_target_in_base.publish(out)

        self.last_tool0 = msg
        self.last_t0_time = self.get_clock().now()

    def _tool1_cb(self, msg: PoseStamped):
        self.last_tool1 = msg
        self.last_t1_time = self.get_clock().now()

    # ---------- Timed republish ----------
    def _tick(self):
        markers = MarkerArray()
        now = self.get_clock().now()

        if self.last_tool0:
            age = (now - self.last_t0_time).nanoseconds * 1e-9
            if age > self.lost_warn:
                self.get_logger().warn_throttle(2.0, f'tool0 stale {age:.2f}s — holding last.')
            markers.markers += self._triad_and_label('polaris_tools', 0, self.last_tool0)
        if self.last_tool1:
            age = (now - self.last_t1_time).nanoseconds * 1e-9
            if age > self.lost_warn:
                self.get_logger().warn_throttle(2.0, f'tool1 stale {age:.2f}s — holding last.')
            markers.markers += self._triad_and_label('polaris_tools', 1, self.last_tool1)

        if markers.markers:
            self.pub_markers.publish(markers)

    # ---------- Helpers ----------
    def _broadcast_ee_marker_static(self):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = self.ee_frame
        t.child_frame_id  = 'ee_marker'
        t.transform.translation.x = 0.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = -float(self.ee_offset)
        t.transform.rotation.w = 1.0
        self.static_tf.sendTransform(t)
        self.get_logger().info(f'Static TF {self.ee_frame} -> ee_marker (0,0,-{self.ee_offset:.3f})')

    def _triad_and_label(self, ns: str, idx: int, pose_msg: PoseStamped):
        """
        Return 5 markers: X(red), Y(green), Z(blue) arrows + origin sphere + text label.
        Orientation follows the tool pose; Y/Z arrows are created by local rotations.
        """
        now = self.get_clock().now().to_msg()
        base_id = 1000 + idx * 20
        mks = []

        # Base pose quaternion
        q_tool = np.array([
            pose_msg.pose.orientation.x,
            pose_msg.pose.orientation.y,
            pose_msg.pose.orientation.z,
            pose_msg.pose.orientation.w
        ], dtype=float)

        def arrow(id_off: int, q_extra, rgba):
            m = Marker()
            m.header.frame_id = pose_msg.header.frame_id or self.camera_frame
            m.header.stamp = now
            m.ns = ns
            m.id = base_id + id_off
            m.type = Marker.ARROW
            m.action = Marker.ADD

            # position = tool origin; orientation = tool * extra_rot
            m.pose = Pose()
            m.pose.position = pose_msg.pose.position
            q = tft.quaternion_multiply(q_tool, q_extra)
            m.pose.orientation.x, m.pose.orientation.y, m.pose.orientation.z, m.pose.orientation.w = q

            # ARROW: scale.x = total length, y=head dia, z=shaft dia
            m.scale.x = self.axis_len + self.axis_head_len
            m.scale.y = self.axis_head_d
            m.scale.z = self.axis_shaft_d

            m.color.a, m.color.r, m.color.g, m.color.b = rgba
            return m

        # Extra rotations to map +X to +X/+Y/+Z
        q_id   = np.array([0,0,0,1], dtype=float)                        # X
        q_y    = tft.quaternion_about_axis(np.pi/2.0, (0,0,1))           # rotate about Z → X→Y
        q_z    = tft.quaternion_about_axis(-np.pi/2.0, (0,1,0))          # rotate about Y → X→Z

        # X=red, Y=green, Z=blue
        mks.append(arrow(0, q_id, (1.0, 1.0, 0.0, 0.0)))
        mks.append(arrow(1, q_y,  (1.0, 0.0, 1.0, 0.0)))
        mks.append(arrow(2, q_z,  (1.0, 0.0, 0.0, 1.0)))

        # Sphere at origin
        s = Marker()
        s.header.frame_id = pose_msg.header.frame_id or self.camera_frame
        s.header.stamp = now
        s.ns = ns
        s.id = base_id + 3
        s.type = Marker.SPHERE
        s.action = Marker.ADD
        s.pose = pose_msg.pose
        s.scale.x = s.scale.y = s.scale.z = self.sphere_d
        s.color.a = 0.85
        s.color.r = 0.95
        s.color.g = 0.95
        s.color.b = 0.95
        mks.append(s)

        # Label
        t = Marker()
        t.header.frame_id = s.header.frame_id
        t.header.stamp = now
        t.ns = ns
        t.id = base_id + 4
        t.type = Marker.TEXT_VIEW_FACING
        t.action = Marker.ADD
        t.pose = pose_msg.pose
        t.pose.position.z += self.sphere_d * 0.8
        t.scale.z = self.label_scale
        t.color.a = 1.0
        t.color.r = 1.0
        t.color.g = 1.0
        t.color.b = 1.0
        t.text = 'tool0 ⦿ target' if idx == 0 else 'tool1 ⦿ EE marker'
        mks.append(t)

        return mks

def main():
    rclpy.init()
    node = PolarisToRobotBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
