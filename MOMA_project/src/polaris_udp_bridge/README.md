# Polaris UDP Bridge (polaris_udp_bridge)

A lightweight ROS 2 Python package that bridges UDP JSON pose packets from a Polaris system into ROS 2 topics and provides an RViz visualiser.

Summary
- Bridge node (`bridge`): listens for newline-delimited UDP JSON packets and republishes them as `geometry_msgs/msg/PoseStamped`, one topic per tool (e.g. `/polaris/tool0_pose`).
- Visualiser node (`viz`): auto-discovers the pose topics and publishes a latched `visualization_msgs/msg/MarkerArray` (spheres, orientation arrows, labels) for RViz.
- Runs on Jetson or any ROS 2 host.

Features
- Receives newline-delimited JSON UDP packets (one JSON per datagram or per line).
- Dynamically creates a separate publisher per tool ID.
- Pre-creates common topics for instant `ros2 topic echo`.
- Preserves sender `stamp` and `frame_id` (falls back to ROS parameter).
- Graceful handling of malformed / missing fields.
- Visualiser publishes latched markers to `/polaris/marker_array` (RViz-friendly suffix).

Build
Run from repository root:
```bash
cd ~/Downloads/omron_moma_ros2/MOMA_project
source /opt/ros/humble/setup.bash
colcon build --packages-select polaris_udp_bridge
source install/setup.bash
```

Run — UDP Bridge
```bash
ros2 run polaris_udp_bridge bridge \
  --ros-args \
  -p port:=5555 \
  -p frame_id:=polaris_optical \
  -p base_topic:=polaris/tool
```

Example log output
```
[INFO] Listening UDP :5555 — publishing to topics /polaris/toolX_pose
[INFO] Pre-created: /polaris/tool0_pose, /polaris/tool1_pose
[INFO] Got tool=0 → /polaris/tool0_pose pos=(-52.46,-153.79,-830.46)
```

Run — Visualiser (RViz markers)
Launch (one-liner):
```bash
ros2 launch polaris_udp_bridge polaris_bridge_viz.launch.py
```

Or run directly:
```bash
ros2 run polaris_udp_bridge viz \
  --ros-args \
  -p frame_id:=polaris_optical \
  -p markers_topic:=/polaris/marker_array \
  -p topic_prefix:=polaris/tool \
  -p marker_scale_m:=0.02 \
  -p input_is_mm:=false
```

RViz setup
1. Start RViz: `rviz2`
2. Set Fixed Frame to the pose `frame_id` (e.g. `polaris_optical`).
3. Add → MarkerArray → Topic: `/polaris/marker_array`
4. (Optional) Add origin axes (length 0.2 m).

Tip: using the `/marker_array` suffix silences RViz’s legacy naming warning.

Topics
| Topic | Type | Description |
|---|---:|---|
| `/polaris/toolN_pose` | `geometry_msgs/msg/PoseStamped` | Pose of tool N (N = 0,1,2,…) |
| `/polaris/marker_array` | `visualization_msgs/msg/MarkerArray` | Latched spheres/arrows/labels for RViz |

JSON format (expected from sender)
```json
{
  "stamp": 1762271078.734,
  "frame_id": "polaris_optical",
  "tool": 0,
  "tx": -52.45, "ty": -153.79, "tz": -830.45,
  "qx": 0.35, "qy": -0.42, "qz": 0.51, "qw": 0.65
}
```

Units
- ROS uses metres. If your sender uses millimetres:
  - Convert in the sender, or
  - Run the visualiser with `-p input_is_mm:=true` and choose an appropriate `marker_scale_m` (e.g. `0.02` for a 20 mm sphere).

Notes / Troubleshooting
- List Polaris topics:
  ```bash
  ros2 topic list | grep polaris
  ```
- Echo a specific tool:
  ```bash
  ros2 topic echo /polaris/tool0_pose
  ```
- Networking: ensure UDP port matches between sender (`POLARIS_UDP_PORT`) and bridge (`port`).
- If ROS 2 discovery is blocked on Wi‑Fi, use Ethernet, a phone hotspot, or a DDS discovery server.
- To render RViz on your laptop while the Jetson publishes, set on both machines:
  ```bash
  export ROS_DOMAIN_ID=0
  export ROS_LOCALHOST_ONLY=0
  ```
  and ensure both hosts are on the same L2 network.
