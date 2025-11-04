#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
import tf_transformations as tft
import numpy as np

class MomaTFPublisher(Node):
    def __init__(self):
        super().__init__('moma_tf_publisher')
        self.br = TransformBroadcaster(self)
        self.timer = self.create_timer(0.1, self.publish_tfs)

    def publish_tfs(self):
        now = self.get_clock().now().to_msg()

        # Camera relative to robot base
        cam = TransformStamped()
        cam.header.stamp = now
        cam.header.frame_id = 'base_link'
        cam.child_frame_id = 'camera_frame'
        cam.transform.translation.x, cam.transform.translation.y, cam.transform.translation.z = (0.45, 0.12, 0.75)
        q = tft.quaternion_from_euler(np.pi, 0, -np.pi/2)
        cam.transform.rotation.x, cam.transform.rotation.y, cam.transform.rotation.z, cam.transform.rotation.w = q
        self.br.sendTransform(cam)

        # Target relative to camera
        tgt = TransformStamped()
        tgt.header.stamp = now
        tgt.header.frame_id = 'camera_frame'
        tgt.child_frame_id = 'target_frame'
        tgt.transform.translation.x, tgt.transform.translation.y, tgt.transform.translation.z = (0.2, 0.1, 0.3)
        q2 = tft.quaternion_from_euler(0, 0, 0)
        tgt.transform.rotation.x, tgt.transform.rotation.y, tgt.transform.rotation.z, tgt.transform.rotation.w = q2
        self.br.sendTransform(tgt)

        # End-effector marker (just a visible reference)
        ee = TransformStamped()
        ee.header.stamp = now
        ee.header.frame_id = 'base_link'
        ee.child_frame_id = 'ee_marker'
        ee.transform.translation.x, ee.transform.translation.y, ee.transform.translation.z = (0.4, 0.0, 0.5)
        q3 = tft.quaternion_from_euler(0, 0, 0)
        ee.transform.rotation.x, ee.transform.rotation.y, ee.transform.rotation.z, ee.transform.rotation.w = q3
        self.br.sendTransform(ee)

def main():
    rclpy.init()
    node = MomaTFPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
