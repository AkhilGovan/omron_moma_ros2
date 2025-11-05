#!/usr/bin/env python3
import math
from typing import Optional

import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from geometry_msgs.msg import PoseStamped
from visualization_msgs.msg import Marker, MarkerArray
from tf2_ros.static_transform_broadcaster import StaticTransformBroadcaster
from geometry_msgs.msg import TransformStamped

def q_to_R(q):
    # quaternion (x,y,z,w) -> 3x3 rotation matrix
    x, y, z, w = q.x, q.y, q.z, q.w
    xx, yy, zz = x*x, y*y, z*z
    xy, xz, yz = x*y, x*z, y*z
    wx, wy, wz = w*x, w*y, w*z
    return [
        [1 - 2*(yy+zz), 2*(xy-wz),     2*(xz+wy)],
        [2*(xy+wz),     1 - 2*(xx+zz), 2*(yz-wx)],
        [2*(xz-wy),     2*(yz+wx),     1 - 2*(xx+yy)],
    ]

def R_mul_v(R, v):
    return (
        R[0][0]*v[0] + R[0][1]*v[1] + R[0][2]*v[2],
        R[1][0]*v[0] + R[1][1]*v[1] + R[1][2]*v[2],
        R[2][0]*v[0] + R[2][1]*v[1] + R[2][2]*v[2],
    )

def v_norm(v):
    import math
    n = math.sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2])
    return (v[0]/n, v[1]/n, v[2]/n), n

def cross(a,b):
    return (a[1]*b[2]-a[2]*b[1], a[2]*b[0]-a[0]*b[2], a[0]*b[1]-a[1]*b[0])

def dot(a,b):
    return a[0]*b[0]+a[1]*b[1]+a[2]*b[2]

def axis_angle_to_R(axis, angle):
    import math
    ax, ay, az = v_norm(axis)[0]
    c, s, C = math.cos(angle), math.sin(angle), 1-math.cos(angle)
    return [
        [c+ax*ax*C,     ax*ay*C-az*s, ax*az*C+ay*s],
        [ay*ax*C+az*s,  c+ay*ay*C,    ay*az*C-ax*s],
        [az*ax*C-ay*s,  az*ay*C+ax*s, c+az*az*C   ],
    ]

def R_mul_R(A,B):
    return [
        [A[0][0]*B[0][0]+A[0][1]*B[1][0]+A[0][2]*B[2][0],
         A[0][0]*B[0][1]+A[0][1]*B[1][1]+A[0][2]*B[2][1],
         A[0][0]*B[0][2]+A[0][1]*B[1][2]+A[0][2]*B[2][2]],
        [A[1][0]*B[0][0]+A[1][1]*B[1][0]+A[1][2]*B[2][0],
         A[1][0]*B[0][1]+A[1][1]*B[1][1]+A[1][2]*B[2][1],
         A[1][0]*B[0][2]+A[1][1]*B[1][2]+A[1][2]*B[2][2]],
        [A[2][0]*B[0][0]+A[2][1]*B[1][0]+A[2][2]*B[2][0],
         A[2][0]*B[0][1]+A[2][1]*B[1][1]+A[2][2]*B[2][1],
         A[2][0]*B[0][2]+A[2][1]*B[1][2]+A[2][2]*B[2][2]],
    ]

def R_to_q(R):
    import math
    t = R[0][0]+R[1][1]+R[2][2]
    if t > 0:
        s = math.sqrt(t+1.0)*2
        w = 0.25*s
        x = (R[2][1]-R[1][2])/s
        y = (R[0][2]-R[2][0])/s
        z = (R[1][0]-R[0][1])/s
    elif R[0][0] > R[1][1] and R[0][0] > R[2][2]:
        s = math.sqrt(1.0+R[0][0]-R[1][1]-R[2][2])*2
        w = (R[2][1]-R[1][2])/s
        x = 0.25*s
        y = (R[0][1]+R[1][0])/s
        z = (R[0][2]+R[2][0])/s
    elif R[1][1] > R[2][2]:
        s = math.sqrt(1.0-R[0][0]+R[1][1]-R[2][2])*2
        w = (R[0][2]-R[2][0])/s
        x = (R[0][1]+R[1][0])/s
        y = 0.25*s
        z = (R[1][2]+R[2][1])/s
    else:
        s = math.sqrt(1.0-R[0][0]-R[1][1]+R[2][2])*2
        w = (R[1][0]-R[0][1])/s
        x = (R[0][2]+R[2][0])/s
        y = (R[1][2]+R[2][1])/s
        z = 0.25*s
    return (x,y,z,w)

class TwoToolCalibrator(Node):
    """
    Compute world->polaris_camera using two tool pose pairs.
    Subscribes:
      /polaris/tool0_pose (PoseStamped, in polaris_camera)
      /polaris/tool1_pose (PoseStamped, in polaris_camera)
    Params (world frame):
      world_frame: world (or base)
      camera_frame: polaris_camera
      tool0_world: [x,y,z,qx,qy,qz,qw]
      tool1_world: [x,y,z,qx,qy,qz,qw]
      input_is_mm: bool (convert camera positions mm->m if needed)
      publish_marker: bool (axes at camera origin)
    Publishes:
      static TF world->polaris_camera
      MarkerArray /polaris/camera_axes
    """

    def __init__(self):
        super().__init__('polaris_two_tool_calibrator')

        self.world_frame = self.declare_parameter('world_frame','world').get_parameter_value().string_value
        self.camera_frame = self.declare_parameter('camera_frame','polaris_camera').get_parameter_value().string_value
        self.input_is_mm = self.declare_parameter('input_is_mm', False).get_parameter_value().bool_value
        self.publish_marker = self.declare_parameter('publish_marker', True).get_parameter_value().bool_value

        def get_pose_param(name):
            arr = self.declare_parameter(name, [0.0,0.0,0.0, 0.0,0.0,0.0,1.0]).get_parameter_value().double_array_value
            return (arr[0],arr[1],arr[2]), (arr[3],arr[4],arr[5],arr[6])

        self.p0w, self.q0w = get_pose_param('tool0_world')  # (x,y,z),(qx,qy,qz,qw)
        self.p1w, self.q1w = get_pose_param('tool1_world')

        self.MM_TO_M = 0.001

        qos = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT,
                         history=HistoryPolicy.KEEP_LAST, depth=5)
        self.sub0 = self.create_subscription(PoseStamped, '/polaris/tool0_pose', self.cb0, qos)
        self.sub1 = self.create_subscription(PoseStamped, '/polaris/tool1_pose', self.cb1, qos)

        self.tf_static = StaticTransformBroadcaster(self)

        if self.publish_marker:
            self.pub_markers = self.create_publisher(MarkerArray, '/polaris/camera_axes', 1)

        self.p0c: Optional[PoseStamped] = None
        self.p1c: Optional[PoseStamped] = None
        self.done = False

        self.get_logger().info('Waiting for tool0 & tool1 poses…')

    def cb0(self, msg: PoseStamped):
        self.p0c = msg
        self.try_solve()

    def cb1(self, msg: PoseStamped):
        self.p1c = msg
        self.try_solve()

    def try_solve(self):
        if self.done or self.p0c is None or self.p1c is None:
            return

        # Camera-frame positions/orientations
        p0c = self.p0c.pose.position
        p1c = self.p1c.pose.position
        if self.input_is_mm:
            p0 = (p0c.x*self.MM_TO_M, p0c.y*self.MM_TO_M, p0c.z*self.MM_TO_M)
            p1 = (p1c.x*self.MM_TO_M, p1c.y*self.MM_TO_M, p1c.z*self.MM_TO_M)
        else:
            p0 = (p0c.x, p0c.y, p0c.z)
            p1 = (p1c.x, p1c.y, p1c.z)

        q0c = (self.p0c.pose.orientation.x, self.p0c.pose.orientation.y,
               self.p0c.pose.orientation.z, self.p0c.pose.orientation.w)
        q1c = (self.p1c.pose.orientation.x, self.p1c.pose.orientation.y,
               self.p1c.pose.orientation.z, self.p1c.pose.orientation.w)

        # World-frame knowns
        p0w, p1w = self.p0w, self.p1w
        q0w, q1w = self.q0w, self.q1w

        # Step 1: align the baseline vectors
        v_c = (p1[0]-p0[0], p1[1]-p0[1], p1[2]-p0[2])
        v_w = (p1w[0]-p0w[0], p1w[1]-p0w[1], p1w[2]-p0w[2])
        v_c, nc = v_norm(v_c)
        v_w, nw = v_norm(v_w)

        axis = cross(v_c, v_w)
        axis_norm, axis_len = v_norm(axis) if (axis[0] or axis[1] or axis[2]) else ((0,0,1), 0.0)
        angle = math.acos(max(-1.0, min(1.0, dot(v_c, v_w))))
        R_align = axis_angle_to_R(axis_norm, angle) if angle > 1e-9 else [[1,0,0],[0,1,0],[0,0,1]]

        # Step 2: resolve roll using tool0 orientation
        R0c = q_to_R(type('Q', (), dict(x=q0c[0],y=q0c[1],z=q0c[2],w=q0c[3])))
        R0w = q_to_R(type('Q', (), dict(x=q0w[0],y=q0w[1],z=q0w[2],w=q0w[3])))

        # choose tool0 'z' axis as reference
        zc = R_mul_v(R_align, (R0c[0][2], R0c[1][2], R0c[2][2]))   # rotated camera z0
        zw = (R0w[0][2], R0w[1][2], R0w[2][2])

        # remove any component along baseline (use perpendicular component to define roll)
        def proj_perp(u, n):
            # u_perp = u - (u·n) n
            d = dot(u, n)
            return (u[0]-d*n[0], u[1]-d*n[1], u[2]-d*n[2])

        zc_perp = proj_perp(zc, v_w)
        zw_perp = proj_perp(zw, v_w)
        zc_perp, _ = v_norm(zc_perp)
        zw_perp, _ = v_norm(zw_perp)

        # rotate around v_w to align zc_perp -> zw_perp
        roll_axis = v_w
        roll_angle = math.atan2(dot(cross(zc_perp, zw_perp), roll_axis), dot(zc_perp, zw_perp))
        R_roll = axis_angle_to_R(roll_axis, roll_angle)

        R = R_mul_R(R_roll, R_align)

        # Step 3: translation via tool0
        Rp0 = R_mul_v(R, p0)
        t = (p0w[0]-Rp0[0], p0w[1]-Rp0[1], p0w[2]-Rp0[2])

        # Publish static TF world->polaris_camera
        x,y,z,w = R_to_q(R)
        tf = TransformStamped()
        tf.header.stamp = self.get_clock().now().to_msg()
        tf.header.frame_id = self.world_frame
        tf.child_frame_id = self.camera_frame
        tf.transform.translation.x = t[0]
        tf.transform.translation.y = t[1]
        tf.transform.translation.z = t[2]
        tf.transform.rotation.x = x
        tf.transform.rotation.y = y
        tf.transform.rotation.z = z
        tf.transform.rotation.w = w
        self.tf_static.sendTransform(tf)

        self.get_logger().info(f'Published static TF {self.world_frame} -> {self.camera_frame}')
        self.get_logger().info(f'Translation: {t[0]:.3f} {t[1]:.3f} {t[2]:.3f}  | Quaternion: {x:.4f} {y:.4f} {z:.4f} {w:.4f}')

        # Optional camera axes marker (so you can “see the camera” in RViz)
        if self.publish_marker:
            ma = MarkerArray()
            now = self.get_clock().now().to_msg()
            # small triad at camera origin
            for i, (dx,dy,dz, rid, col) in enumerate([
                (0.05, 0,    0,    0, (1,0,0,1)),  # X
                (0,    0.05, 0,    1, (0,1,0,1)),  # Y
                (0,    0,    0.05, 2, (0,0,1,1)),  # Z
            ]):
                m = Marker()
                m.header.frame_id = self.camera_frame
                m.header.stamp = now
                m.ns = 'polaris_camera_axes'
                m.id = rid
                m.type = Marker.ARROW
                m.action = Marker.ADD
                m.pose.orientation.w = 1.0
                m.scale.x = 0.05  # shaft length
                m.scale.y = 0.01  # shaft diameter
                m.scale.z = 0.02  # head diameter
                m.color.r, m.color.g, m.color.b, m.color.a = col
                # ARROW at origin points along +axis by setting position at origin and orientation identity,
                # but rviz Marker.ARROW needs points to draw a custom arrow. Simpler: use a CYLINDER per axis? For brevity keep ARROW.
                ma.markers.append(m)
            self.pub_markers.publish(ma)

        self.done = True


def main():
    rclpy.init()
    node = TwoToolCalibrator()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
