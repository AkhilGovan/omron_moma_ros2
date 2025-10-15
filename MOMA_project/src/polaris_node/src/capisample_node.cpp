#include "ament_index_cpp/get_package_share_directory.hpp"
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include "CombinedApi.h"
#include "ToolData.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class PolarisNode : public rclcpp::Node {
public:
    PolarisNode() : Node("polaris_node") {
        publisher1_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("polaris/tool1_pose", 10);
        publisher2_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("polaris/tool2_pose", 10);


        std::string ip = this->declare_parameter<std::string>("vega_ip", "169.254.8.102");
        if (capi.connect(ip) != 0) {
            RCLCPP_ERROR(this->get_logger(), "Failed to connect to Polaris at %s", ip.c_str());
            rclcpp::shutdown();
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Connected to Polaris at %s", ip.c_str());

        onErrorPrintDebugMessage("capi.initialize()", capi.initialize());

        configurePassiveTools();
        initializeAndEnableTools();
        capi.startTracking();

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100),
            std::bind(&PolarisNode::publish_pose, this)
        );
    }

private:
    void publish_pose() {
        std::vector<ToolData> toolData = capi.getTrackingDataBX();
        std::cout << "Tracking " << toolData.size() << " tools." << std::endl;

        for (size_t i = 0; i < toolData.size(); ++i) {
            if (toolData[i].transform.isMissing()) {
                RCLCPP_WARN(this->get_logger(), "Tool %zu: No valid tracking data.", i);
                continue;
            }

            auto& t = toolData[i].transform;

            geometry_msgs::msg::PoseStamped msg;
            msg.header.stamp = this->now();
            msg.header.frame_id = "polaris_base";
            msg.pose.position.x = t.tx;
            msg.pose.position.y = t.ty;
            msg.pose.position.z = t.tz;
            msg.pose.orientation.w = t.q0;
            msg.pose.orientation.x = t.qx;
            msg.pose.orientation.y = t.qy;
            msg.pose.orientation.z = t.qz;

            if (i == 0) {
                publisher1_->publish(msg);
            } else if (i == 1) {
                publisher2_->publish(msg);
            }
        }
    }


    void onErrorPrintDebugMessage(const std::string& methodName, int errorCode) {
        if (errorCode < 0) {
            std::cout << methodName << " failed: " << capi.errorToString(errorCode) << std::endl;
        }
    }

    void initializeAndEnableTools() {
        std::cout << "\nInitializing and enabling tools..." << std::endl;

        std::vector<PortHandleInfo> portHandles = capi.portHandleSearchRequest(PortHandleSearchRequestOption::NotInit);
        for (const auto& handle : portHandles) {
            onErrorPrintDebugMessage("capi.portHandleInitialize()", capi.portHandleInitialize(handle.getPortHandle()));
            onErrorPrintDebugMessage("capi.portHandleEnable()", capi.portHandleEnable(handle.getPortHandle()));
        }
    }

    void loadTool(const char* toolDefinitionFilePath) {
        int portHandle = capi.portHandleRequest();
        onErrorPrintDebugMessage("capi.portHandleRequest()", portHandle);
        capi.loadSromToPort(toolDefinitionFilePath, portHandle);
    }

    void configurePassiveTools() {
        std::cout << "\nConfiguring Passive Tools - Loading .rom Files..." << std::endl;
        // loadTool("sroms/8700338.rom");
        const std::string share = ament_index_cpp::get_package_share_directory("polaris_node");
        const std::string srom_dir = share + "/sroms";

        // Build full paths first so the c_str() points to a live std::string
        const std::string rom1 = srom_dir + "/8700339.rom";  // target
        const std::string rom2 = srom_dir + "/8700340.rom";  // injector

        loadTool(rom1.c_str());
        loadTool(rom2.c_str());

    }

    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr publisher1_;
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr publisher2_;
    rclcpp::TimerBase::SharedPtr timer_;
    CombinedApi capi;
};

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PolarisNode>());
    rclcpp::shutdown();
    std::cout << "Shutting Down" << std::endl;
    return 0;
}
