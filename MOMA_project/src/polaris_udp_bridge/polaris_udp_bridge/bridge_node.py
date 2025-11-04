import socket, json
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from builtin_interfaces.msg import Time as RosTime

class PolarisUdpBridge(Node):
    def __init__(self):
        super().__init__("polaris_udp_bridge")

        self.port = self.declare_parameter("port", 5555).get_parameter_value().integer_value
        self.frame_id = self.declare_parameter("frame_id", "polaris_optical").get_parameter_value().string_value
        self.base_topic = self.declare_parameter("base_topic", "polaris/tool").get_parameter_value().string_value

        # Pre-create common tool topics (0 and 1) so you can echo immediately
        self.pubs = {
            0: self.create_publisher(PoseStamped, f"{self.base_topic}0_pose", 10),
            1: self.create_publisher(PoseStamped, f"{self.base_topic}1_pose", 10),
        }
        self.get_logger().info(f"Pre-created topics: {self.base_topic}0_pose and {self.base_topic}1_pose")

        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.bind(("0.0.0.0", self.port))
        self.sock.setblocking(False)
        self.get_logger().info(f"Listening UDP :{self.port}")

        self._dbg_count = 0
        self.create_timer(0.0, self.spin_once)

    def spin_once(self):
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

                # Default to tool 0 if missing
                tool = int(m.get("tool", 0))
                topic_name = f"{self.base_topic}{tool}_pose"

                # Create publisher if a new tool id appears
                if tool not in self.pubs:
                    self.pubs[tool] = self.create_publisher(PoseStamped, topic_name, 10)
                    self.get_logger().info(f"Created publisher for {topic_name}")

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
                    p.x = float(m["tx"]); p.y = float(m["ty"]); p.z = float(m["tz"])
                    o.x = float(m["qx"]); o.y = float(m["qy"]); o.z = float(m["qz"]); o.w = float(m["qw"])
                except KeyError as e:
                    self.get_logger().warn(f"Missing field in UDP: {e}")
                    continue

                self.pubs[tool].publish(msg)

                if self._dbg_count < 5:
                    self.get_logger().info(f"Got tool={tool} → {topic_name}  pos=({p.x:.2f},{p.y:.2f},{p.z:.2f})")
                    self._dbg_count += 1

        except BlockingIOError:
            pass
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
