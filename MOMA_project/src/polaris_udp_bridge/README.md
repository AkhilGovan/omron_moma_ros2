# README — Polaris UDP Bridge (polaris_udp_bridge)

## Overview
polaris_udp_bridge is a lightweight ROS 2 Python node that listens for UDP JSON packets from the Polaris node and republishes them as `geometry_msgs/msg/PoseStamped`. It dynamically creates one ROS 2 topic per tool (e.g. `/polaris/tool0_pose`, `/polaris/tool1_pose`) and runs on a Jetson or any ROS 2 host.

## Features
- Receives newline-delimited JSON UDP packets
- Automatically creates a separate ROS 2 publisher per tool ID
- Supports pre-created topics for instant `ros2 topic echo`
- Adds `frame_id` and timestamp from sender
- Handles malformed or missing fields gracefully

## Building
```bash
cd ~/Downloads/omron_moma_ros2/MOMA_project
source /opt/ros/humble/setup.bash
colcon build --packages-select polaris_udp_bridge
source install/setup.bash
```

## Running
```bash
ros2 run polaris_udp_bridge bridge \
  --ros-args \
  -p port:=5555 \
  -p frame_id:=polaris_optical
```

## Example Output
```
[INFO] Listening UDP :5555 — publishing to topics /polaris/toolX_pose
[INFO] Created publisher for polaris/tool0_pose
[INFO] Created publisher for polaris/tool1_pose
[INFO] Got tool=0 → polaris/tool0_pose  pos=(-52.46,-153.79,-830.46)
```

## Topics
| Topic | Type | Description |
|---|---:|---|
| /polaris/tool0_pose | `geometry_msgs/msg/PoseStamped` | Pose of tool 0 |
| /polaris/tool1_pose | `geometry_msgs/msg/PoseStamped` | Pose of tool 1 |

## JSON Format (expected from sender)
```json
{
  "stamp": 1762271078.734,
  "frame_id": "polaris_optical",
  "tool": 0,
  "tx": -52.45, "ty": -153.79, "tz": -830.45,
  "qx": 0.35, "qy": -0.42, "qz": 0.51, "qw": 0.65
}
```

## Notes
You can view all active topics with:
```bash
ros2 topic list | grep polaris
```

To monitor a specific tool:
```bash
ros2 topic echo /polaris/tool0_pose
```

Ensure the UDP port matches between sender (`POLARIS_UDP_PORT`) and bridge (`port` parameter). Use a reliable LAN or Wi‑Fi (e.g., phone hotspot) if multicast/UDP is blocked on campus Wi‑Fi.