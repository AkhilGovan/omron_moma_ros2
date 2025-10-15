import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
from scipy.spatial.transform import Rotation as R
from mpl_toolkits.mplot3d.art3d import Poly3DCollection

class PolarisPlotter(Node):
    def __init__(self):
        super().__init__('polaris_plotter')

        self.tool_poses = {
            1: None,
            2: None
        }

        # Subscribe to both tool pose topics
        self.subscription1 = self.create_subscription(
            PoseStamped,
            'polaris/tool1_pose',
            lambda msg: self.listener_callback(msg, 1),
            10
        )

        self.subscription2 = self.create_subscription(
            PoseStamped,
            'polaris/tool2_pose',
            lambda msg: self.listener_callback(msg, 2),
            10
        )

        # Set up plot
        plt.ion()
        self.fig = plt.figure()
        self.ax = self.fig.add_subplot(111, projection='3d')
        self.ax.set_xlabel('X (mm)')
        self.ax.set_ylabel('Y (mm)')
        self.ax.set_zlabel('Z (mm)')
        self.ax.set_title('Live Polaris Tool Poses')

    def listener_callback(self, msg, tool_id):
        self.tool_poses[tool_id] = msg
        self.update_plot()

    def update_plot(self):
        self.ax.clear()
        self.ax.set_title('Live Polaris Tool Poses')
        self.ax.set_xlabel('X (mm)')
        self.ax.set_ylabel('Y (mm)')
        self.ax.set_zlabel('Z (mm)')

        self.ax.set_xlim(-1500, 1500)
        self.ax.set_ylim(-1500, 1500)
        self.ax.set_zlim(-1500, 1500)

        colors = {1: 'blue', 2: 'green'}
        labels = {1: 'Tool 1', 2: 'Tool 2'}

        for tool_id, msg in self.tool_poses.items():
            if msg is None:
                continue

            pose = msg.pose
            pos = np.array([pose.position.x, pose.position.y, pose.position.z])
            quat = np.array([
                pose.orientation.x,
                pose.orientation.y,
                pose.orientation.z,
                pose.orientation.w
            ])
            rot = R.from_quat(quat)
            direction = rot.apply([1, 0, 0]) * 200  # orientation arrow length

            # Draw the Polaris Vega operating volume as a translucent box
            # Define the box's corners 
            x_range = [-500, 500]
            y_range = [0, 1000]
            z_range = [-500, 500]

            # Create box vertices
            vertices = [
                [x_range[0], y_range[0], z_range[0]],
                [x_range[1], y_range[0], z_range[0]],
                [x_range[1], y_range[1], z_range[0]],
                [x_range[0], y_range[1], z_range[0]],
                [x_range[0], y_range[0], z_range[1]],
                [x_range[1], y_range[0], z_range[1]],
                [x_range[1], y_range[1], z_range[1]],
                [x_range[0], y_range[1], z_range[1]],
            ]

            # Define the box faces using the vertices
            faces = [
                [vertices[0], vertices[1], vertices[2], vertices[3]],
                [vertices[4], vertices[5], vertices[6], vertices[7]],
                [vertices[0], vertices[1], vertices[5], vertices[4]],
                [vertices[2], vertices[3], vertices[7], vertices[6]],
                [vertices[1], vertices[2], vertices[6], vertices[5]],
                [vertices[4], vertices[7], vertices[3], vertices[0]],
            ]

            box = Poly3DCollection(faces, alpha=0.1, facecolor='cyan', edgecolor='black')
            self.ax.add_collection3d(box)

            # Plot tool position
            self.ax.scatter(*pos, c=colors[tool_id], s=50, label=labels[tool_id])

            # Plot orientation arrow
            self.ax.quiver(
                pos[0], pos[1], pos[2],
                direction[0], direction[1], direction[2],
                color='red', length=1.0, normalize=False
            )

            # Add text overlay with position (optional)
            text = f"{labels[tool_id]}\nX: {pos[0]:.1f}\nY: {pos[1]:.1f}\nZ: {pos[2]:.1f}"
            self.ax.text(pos[0], pos[1], pos[2] + 50, text, fontsize=8)

        self.ax.legend()
        plt.draw()
        plt.pause(0.001)

def main(args=None):
    print("Running Polaris Plotter for 2 tools")
    rclpy.init(args=args)
    node = PolarisPlotter()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
