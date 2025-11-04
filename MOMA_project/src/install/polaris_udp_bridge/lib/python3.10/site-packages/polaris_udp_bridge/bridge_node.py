import socket
import json
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from builtin_interfaces.msg import Time as RosTime


class PolarisUdpBridge(Node):
    def __init__(self):
        super().__init__("polaris_udp_bridge")

        # --- Parameters ---
        self.port = (
            self.declare_parameter("port", 5555)
            .get_parameter_value()
            .integer_value
        )
        self.frame_id = (
            self.declare_parameter("frame_id", "polaris_optical")
            .get_parameter_value()
            .string_value
        )

        # topic template (used for naming)
        self.base_topic = (
            self.declare_parameter("base_topic", "polaris/tool")
            .get_parameter_value()
            .string_value
        )

        # tool_id -> publisher
        self.pubs = {}

        # --- UDP setup ---
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.bind(("0.0.0.0", self.port))
        self.sock.setblocking(False)

        self.get_logger().info(
            f"Listening on UDP :{self.port} — publishing to topics /{self.base_topic}X_pose"
        )

        # --- Main timer ---
        self.create_timer(0.0, self.spin_once)  # run continuously

    def spin_once(self):
        """Poll socket; if message arrives, parse and republish as PoseStamped."""
        try:
            while True:
                data, _ = self.sock.recvfrom(4096)
                if not data:
                    return
                try:
                    m = json.loads(data.decode("utf-8").strip())
                except json.JSONDecodeError as e:
                    self.get_logger().warn(f"Bad JSON: {e}")
                    continue

                # Determine tool ID
                tool = int(m.get("tool", 0))
                topic_name = f"{self.base_topic}{tool}_pose"

                # Create publisher for this tool if it doesn't exist
                if tool not in self.pubs:
                    self.pubs[tool] = self.create_publisher(PoseStamped, topic_name, 10)
                    self.get_logger().info(f"Created publisher for {topic_name}")

                pub = self.pubs[tool]

                # Build PoseStamped message
                msg = PoseStamped()

                if "stamp" in m:
                    sec = int(m["stamp"])
                    nsec = int((m["stamp"] - sec) * 1e9)
                    msg.header.stamp = RosTime(sec=sec, nanosec=nsec)
                else:
                    msg.header.stamp = self.get_clock().now().to_msg()

                msg.header.frame_id = m.get("frame_id", self.frame_id)

                try:
                    p = msg.pose.position
                    o = msg.pose.orientation
                    p.x = float(m["tx"])
                    p.y = float(m["ty"])
                    p.z = float(m["tz"])
                    o.x = float(m["qx"])
                    o.y = float(m["qy"])
                    o.z = float(m["qz"])
                    o.w = float(m["qw"])
                except KeyError as e:
                    self.get_logger().warn(f"Missing field in UDP message: {e}")
                    continue

                pub.publish(msg)

                # Optional: print debug info
                self.get_logger().info_throttle(
                    2000, f"Tool {tool} → {topic_name} | Pos=({p.x:.1f},{p.y:.1f},{p.z:.1f})"
                )

        except BlockingIOError:
            pass  # No data yet
        except Exception as e:
            self.get_logger().warn(f"UDP parse error: {e}")


def main():
    rclpy.init()
    node = PolarisUdpBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
