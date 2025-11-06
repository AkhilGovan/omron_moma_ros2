#!/bin/bash
# ==============================================================
#  Omron MoMa + Polaris Precision Setup Launcher
#  Builds, sources, and launches:
#   - TM12s MoveIt2 scene
#   - Polaris UDP Bridge
#   - Polaris Visualiser
#   - Polaris Two-Tool Calibrator
# ==============================================================

set -e  # Exit immediately on any error

# --- USER CONFIG ----------------------------------------------
ROBOT_IP="192.168.1.2"                       # TM12s robot IP
ROS_DISTRO="humble"
PKG_DIR="$HOME/Downloads/omron_moma_ros2/MOMA_project"

POLARIS_PORT=5555                            # UDP port for Polaris data
POLARIS_FRAME="polaris_camera"               # Tracker frame name
INPUT_IS_MM=false                            # true if bridge still sends mm
# ---------------------------------------------------------------

echo "1/5 — Sourcing ROS 2 $ROS_DISTRO ..."
source /opt/ros/$ROS_DISTRO/setup.bash

echo "2/5 — Building workspace ..."
cd "$PKG_DIR"
colcon build --packages-select polaris_udp_bridge --symlink-install
echo "Build complete."

echo "3/5 — Sourcing local workspace ..."
source install/setup.bash

# ---------------------------------------------------------------
echo "4/5 — Launching full system ..."

# --- Launch TM12s MoveIt2 in a separate terminal --------------
gnome-terminal -- bash -c "
  echo 'Starting TM12s MoveIt2...';
  source /opt/ros/$ROS_DISTRO/setup.bash;
  source $PKG_DIR/install/setup.bash;
  ros2 launch tm12s_moveit_config tm12s_run_move_group.launch.py robot_ip:=$ROBOT_IP;
  exec bash" &

sleep 5  # give MoveIt a moment to start RViz

# --- Launch Polaris UDP Bridge --------------------------------
gnome-terminal -- bash -c "
  echo 'Starting Polaris UDP Bridge...';
  source /opt/ros/$ROS_DISTRO/setup.bash;
  source $PKG_DIR/install/setup.bash;
  ros2 run polaris_udp_bridge bridge --ros-args \
    -p port:=$POLARIS_PORT \
    -p frame_id:=polaris_camera \
    -p base_topic:=polaris/tool;

  exec bash" &

sleep 2  # small delay so topics exist before viz subscribes

# --- Launch Polaris Viz + Calibration --------------------------
gnome-terminal -- bash -c "
  echo 'Starting Polaris Visualiser + Calibrator...';
  source /opt/ros/$ROS_DISTRO/setup.bash;
  source $PKG_DIR/install/setup.bash;
  ros2 launch polaris_udp_bridge polaris_calibrate.launch.py input_is_mm:=$INPUT_IS_MM;
  exec bash" &

# ---------------------------------------------------------------
echo ""
echo "All components launched."
echo "  • Fixed Frame in RViz → world"
echo "  • Polaris Frames → $POLARIS_FRAME and tools"
echo "  • TF → world → $POLARIS_FRAME → tool0/1"
echo ""
echo "Close with Ctrl-C in each terminal when finished."
