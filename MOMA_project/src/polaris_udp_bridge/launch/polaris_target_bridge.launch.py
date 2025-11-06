from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Polaris camera → optical (ROS camera optical convention)
        # If you just need an alias, swap the angles to 0 0 0 and keep the same frame names.
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='polaris_camera_to_optical',
            arguments=[
                '0','0','0',          # x y z
                '-1.570796','0','-1.570796',  # roll pitch yaw (rad) = Rx(-90°) then Rz(-90°)
                'polaris_camera','polaris_optical'
            ],
            output='screen'
        ),

        # Bridge: transforms tool0→base, publishes fat triads + labels, holds last pose
        Node(
            package='polaris_udp_bridge',
            executable='polaris_to_robot_bridge',
            name='polaris_to_robot_bridge',
            output='screen',
            parameters=[
                # Frames
                {'camera_frame':'polaris_camera'},
                {'base_frame':'base'},
                {'ee_frame_name':'ee_link'},

                # Marker visibility knobs (bump these if you’re far from the camera)
                {'axis_len':0.18},
                {'axis_shaft_d':0.015},
                {'axis_head_d':0.030},
                {'axis_head_len':0.050},
                {'sphere_d':0.050},
                {'label_scale':0.070},

                # Hold-last timing
                {'lost_warn_secs':0.75},

                # EE marker 30 cm below flange
                {'ee_marker_offset_m':0.30},

                # ==== REPLACE WITH YOUR CALIBRATION (same instant) ====
                # EE in CAMERA frame (x,y,z metres; quaternion x,y,z,w)
                {'ee_in_cam_xyz':[0.120, -0.045, 0.380]},
                {'ee_in_cam_xyzw':[0.000, 0.707, 0.000, 0.707]},
                # EE in BASE frame
                {'ee_in_base_xyz':[0.420, -0.100, 0.600]},
                {'ee_in_base_xyzw':[0.000, 0.707, 0.000, 0.707]},
            ]
        )
    ])
