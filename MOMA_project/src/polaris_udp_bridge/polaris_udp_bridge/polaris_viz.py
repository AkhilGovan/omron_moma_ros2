#!/usr/bin/env python3
import re
from typing import Dict

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy, DurabilityPolicy
from geometry_msgs.msg import PoseStamped
from visualization_msgs.msg import Marker, MarkerArray


class PolarisMarkerViz(Node):
    def __init__(self):
        super().__init__('polaris_marker_viz')

        # ---- Parameters ----
        self.frame_id = self.declare_parameter('frame_id', 'polaris_optical') \
            .get_parameter_value().string_value
        self.scan_period = self.declare_parameter('scan_period', 1.0) \
            .get_parameter_value().double_value
        self.topic_prefix = self.declare_parameter('topic_prefix', 'polaris/tool') \
            .get_parameter_value().string_value
        # Marker scale is a *linear size in metres* (RViz uses metres)
        self.marker_scale_m = self.declare_parameter('marker_scale_m', 0.02) \
            .get_parameter_value().double_value
        self.alpha = self.declare_parameter('marker_alpha', 0.9) \
            .get_parameter_value().double_value
        self.markers_topic = self.declare_parameter(
            'markers_topic', '/polaris/marker_array'
        ).get_parameter_value().string_value

        # If your upstream sender publishes mm, set this param true to convert to metres here.
        self.input_is_mm = self.declare_parameter('input_is_mm', False) \
            .get_parameter_value().bool_value
        self.MM_TO_M = 0.001

        # QoS for incoming poses (UDP-ish timing)
        self._pose_qos = QoSProfile(
            reliability=ReliabilityPolicy.BEST_EFFORT,
            history=HistoryPolicy.KEEP_LAST,
            depth=5
        )

        # QoS for markers: RELIABLE + TRANSIENT_LOCAL so RViz sees last markers immediately
        markers_qos = QoSProfile(
            depth=1,
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            durability=DurabilityPolicy.TRANSIENT_LOCAL
        )
        self.pub_markers = self.create_publisher(MarkerArray, self.markers_topic, markers_qos)
        self.get_logger().info(f'Publishing MarkerArray on {self.markers_topic}')

        # Dynamic subscribers
        self.subs: Dict[int, rclpy.subscription.Subscription] = {}
        self.last_poses: Dict[int, PoseStamped] = {}

        # Compile prefix-aware regex for discovery, e.g. ^/?polaris/tool(\d+)_pose$
        prefix_escaped = re.escape(self.topic_prefix)
        self._topic_regex = re.compile(rf'^/?{prefix_escaped}(\d+)_pose$')

        # Timers
        self.create_timer(self.scan_period, self._scan_for_tool_topics)
        self.create_timer(0.1, self._publish_markers)  # 10 Hz

        # Wipe any stale markers left over from a previous run
        wipe = Marker()
        wipe.action = Marker.DELETEALL
        self.pub_markers.publish(MarkerArray(markers=[wipe]))

        self.get_logger().info('PolarisMarkerViz ready → watching /polaris/tool*_pose')

    # ---- Discovery ----
    def _scan_for_tool_topics(self):
        for name, _types in self.get_topic_names_and_types():
            m = self._topic_regex.match(name)
            if not m:
                continue
            tool_id = int(m.group(1))
            if tool_id in self.subs:
                continue
            self.subs[tool_id] = self.create_subscription(
                PoseStamped, name,
                lambda msg, tid=tool_id: self._on_pose(msg, tid),
                self._pose_qos
            )
            self.get_logger().info(f'Subscribed to {name} (tool {tool_id})')

    # ---- Pose callback ----
    def _on_pose(self, msg: PoseStamped, tool_id: int):
        # Optionally convert mm → m on the fly
        if self.input_is_mm:
            p = msg.pose.position
            p.x *= self.MM_TO_M
            p.y *= self.MM_TO_M
            p.z *= self.MM_TO_M
        self.last_poses[tool_id] = msg

    # ---- Marker publishing ----
    def _publish_markers(self):
        if not self.last_poses:
            return

        ma = MarkerArray()
        now = self.get_clock().now().to_msg()

        def colour_for(tid: int):
            # Stable pseudo-random colour in [0.3..1.0]
            r = max(0.3, ((tid * 97) % 255) / 255.0)
            g = max(0.3, ((tid * 57) % 255) / 255.0)
            b = max(0.3, ((tid * 23) % 255) / 255.0)
            return r, g, b

        for tool_id, pose_stamped in sorted(self.last_poses.items()):
            p = pose_stamped.pose.position
            o = pose_stamped.pose.orientation
            r, g, b = colour_for(tool_id)
            frame = pose_stamped.header.frame_id or self.frame_id

            # Sphere (position)
            m_sphere = Marker()
            m_sphere.header.frame_id = frame
            m_sphere.header.stamp = now
            m_sphere.ns = 'polaris_tools'
            m_sphere.id = tool_id
            m_sphere.type = Marker.SPHERE
            m_sphere.action = Marker.ADD
            m_sphere.pose.position = p
            m_sphere.pose.orientation.w = 1.0
            m_sphere.scale.x = self.marker_scale_m
            m_sphere.scale.y = self.marker_scale_m
            m_sphere.scale.z = self.marker_scale_m
            m_sphere.color.r = float(r)
            m_sphere.color.g = float(g)
            m_sphere.color.b = float(b)
            m_sphere.color.a = float(self.alpha)
            ma.markers.append(m_sphere)

            # Orientation arrow
            m_arrow = Marker()
            m_arrow.header.frame_id = frame
            m_arrow.header.stamp = now
            m_arrow.ns = 'polaris_tools_arrow'
            m_arrow.id = 1000 + tool_id
            m_arrow.type = Marker.ARROW
            m_arrow.action = Marker.ADD
            m_arrow.pose.position = p
            m_arrow.pose.orientation = o
            shaft = self.marker_scale_m * 2.5
            head = self.marker_scale_m * 1.2
            m_arrow.scale.x = shaft                  # shaft length
            m_arrow.scale.y = self.marker_scale_m*0.3  # shaft diameter
            m_arrow.scale.z = head                   # head diameter
            m_arrow.color.r = float(r)
            m_arrow.color.g = float(g)
            m_arrow.color.b = float(b)
            m_arrow.color.a = float(self.alpha)
            ma.markers.append(m_arrow)

            # Text label
            m_text = Marker()
            m_text.header.frame_id = frame
            m_text.header.stamp = now
            m_text.ns = 'polaris_labels'
            m_text.id = 2000 + tool_id
            m_text.type = Marker.TEXT_VIEW_FACING
            m_text.action = Marker.ADD
            m_text.pose.position.x = p.x
            m_text.pose.position.y = p.y
            m_text.pose.position.z = p.z + self.marker_scale_m * 1.2
            m_text.scale.z = self.marker_scale_m * 0.9  # font height (metres)
            m_text.color.r = 1.0
            m_text.color.g = 1.0
            m_text.color.b = 1.0
            m_text.color.a = 1.0
            m_text.text = f'Tool {tool_id}'
            ma.markers.append(m_text)

        self.pub_markers.publish(ma)


def main():
    rclpy.init()
    node = PolarisMarkerViz()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
