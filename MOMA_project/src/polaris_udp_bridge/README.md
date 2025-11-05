# Polaris UDP Bridge (polaris_udp_bridge)

A lightweight ROS 2 Python package that bridges UDP JSON pose packets from a Polaris optical tracking system into ROS 2 topics, with a companion RViz visualiser and calibration utility.

## Summary

- Bridge node (bridge) — Listens for newline-delimited UDP JSON packets and republishes them as `geometry_msgs/msg/PoseStamped`, one topic per tool (for example `/polaris/tool0_pose`).
- Visualiser node (viz) — Auto-discovers pose topics and publishes a latched `visualization_msgs/msg/MarkerArray` (spheres, orientation arrows, and labels) for RViz.
- Calibration node (calibrate_two_tools) — Computes and publishes a static transform between the Polaris tracking frame (`polaris_camera`) and the robot/world frame (`world` / `base`) using two tracked tools with known world poses.

Runs on an NVIDIA Jetson or any ROS 2 host.

## Features

- Receives newline-delimited JSON UDP packets (one JSON per datagram or per line).
- Dynamically creates a separate publisher per tool ID.
- Pre-creates common topics for instant `ros2 topic echo`.
- Preserves sender-provided `stamp` and `frame_id` (falls back to a ROS parameter).
- Gracefully handles malformed or missing fields.
- Visualiser publishes latched markers to `/polaris/marker_array`.
- Calibration node publishes `world → polaris_camera` and visualises a camera axes marker in RViz.

## Build

Run from the project root:

```
cd ~/Downloads/omron_moma_ros2/MOMA_project
source /opt/ros/humble/setup.bash
colcon build --packages-select polaris_udp_bridge
source install/setup.bash
```

## Run — UDP Bridge

```
ros2 run polaris_udp_bridge bridge \
  --ros-args \
  -p port:=5555 \
  -p frame_id:=polaris_optical \
  -p base_topic:=polaris/tool
```

Example log output:

```
[INFO] Listening UDP :5555 — publishing to topics /polaris/toolX_pose
[INFO] Pre-created: /polaris/tool0_pose, /polaris/tool1_pose
[INFO] Got tool=0 → /polaris/tool0_pose pos=(-52.46,-153.79,-830.46)
```

## Run — Visualiser (RViz markers)

Launch (recommended):

```
ros2 launch polaris_udp_bridge polaris_bridge_viz.launch.py
```

Or run directly:

```
ros2 run polaris_udp_bridge viz \
  --ros-args \
  -p frame_id:=polaris_optical \
  -p markers_topic:=/polaris/marker_array \
  -p topic_prefix:=polaris/tool \
  -p marker_scale_m:=0.02 \
  -p input_is_mm:=false
```

## RViz Setup/ Run TM RVIZ

ros2 launch tm12s_moveit_config tm12s_run_move_group.launch.py robot_ip:=192.168.1.2

Start RViz:

```
rviz2
```

- Fixed Frame: set to your pose frame ID (e.g. `polaris_optical` or `world`).
- Add → MarkerArray → Topic: `/polaris/marker_array`.
- (Optional) Add Axes (length 0.2 m) at the origin.

Using the `/marker_array` suffix avoids RViz legacy naming warnings.

## Calibration — Compute world → polaris_camera

The calibration node computes a static transform between the Polaris camera frame and your robot/world frame using two tools with known positions in world space.

Launch (recommended):

```
ros2 launch polaris_udp_bridge polaris_calibrate.launch.py
```

### Description

Subscribes to:
- `/polaris/tool0_pose` and `/polaris/tool1_pose` (in `polaris_camera`)

Parameters:
- `world_frame`: Target world frame (e.g. `world` or `base`)
- `camera_frame`: Polaris frame (e.g. `polaris_camera`)
- `tool0_world`, `tool1_world`: Known tool poses in world `[x, y, z, qx, qy, qz, qw]`
- `input_is_mm`: Convert mm → m if bridge outputs millimetres
- `publish_marker`: Show a small camera axes marker in RViz

Publishes:
- Static TF: `world → polaris_camera`
- MarkerArray `/polaris/camera_axes` (camera triad)

Output example:

```
[INFO] [calibrate]: Published static TF world → polaris_camera
[INFO] [calibrate]: t = 0.441 0.103 0.252
[INFO] [calibrate]: q = 0.0023 -0.0010 0.9985 0.0541
```

RViz view:
- Set Fixed Frame to `world` and enable:
  - MarkerArray → `/polaris/marker_array`
  - MarkerArray → `/polaris/camera_axes`
  - TF (optional) to visualise `world`, `polaris_camera`, and tools

## Example calibration setup

Two tools visible to Polaris:

| Tool  | World pose (example)                         | Notes                        |
|-------|-----------------------------------------------|------------------------------|
| Tool 0| `[0.400, 0.100, 0.250, 0, 0, 0, 1]`           | Known 3-D pose in world      |
| Tool 1| `[0.550, 0.120, 0.260, 0, 0, 0, 1]`           | Known 3-D pose in world      |

Edit these values in `launch/polaris_calibrate.launch.py`, rebuild, and run the launch file. The node computes and publishes `world → polaris_camera`.

## Topics

| Topic                      | Type                                      | Description                                  |
|---------------------------:|-------------------------------------------|----------------------------------------------|
| `/polaris/toolN_pose`      | `geometry_msgs/msg/PoseStamped`           | Pose of tool N (N = 0,1,2,…)                 |
| `/polaris/marker_array`    | `visualization_msgs/msg/MarkerArray`      | Latched tool markers for RViz                |
| `/polaris/camera_axes`     | `visualization_msgs/msg/MarkerArray`      | Camera triad after calibration               |
| `/tf_static`               | `tf2_msgs/msg/TFMessage`                  | Published static transform (world → polaris_camera) |

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

## Units

ROS uses metres. If your sender transmits millimetres, either:
- Convert units in the sender, or
- Run the bridge with:
  ```
  -p input_is_mm:=true -p marker_scale_m:=0.02
  ```
  (for 20 mm markers in RViz)

## Notes & Troubleshooting

View active Polaris topics:

```
ros2 topic list | grep polaris
```

Echo a specific tool:

```
ros2 topic echo /polaris/tool0_pose
```

Networking:
- Ensure UDP ports match between sender (`POLARIS_UDP_PORT`) and bridge (`port`).
- If ROS 2 discovery is blocked on Wi‑Fi, use Ethernet, a phone hotspot, or a DDS Discovery Server.

Remote RViz (laptop ↔ Jetson):
- On both machines:
  ```
  export ROS_DOMAIN_ID=0
  export ROS_LOCALHOST_ONLY=0
  ```
- Ensure both hosts are on the same Layer‑2 network (same subnet).

The bridge, viz, and calibrate_two_tools nodes together form a complete, modular Polaris integration stack: live UDP pose ingestion, world-frame calibration, and visualisation for optical tracking in robotic applications.
