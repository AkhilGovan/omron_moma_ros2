cmake_minimum_required(VERSION 3.8)
project(polaris_node)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find ROS 2 dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(ament_index_cpp REQUIRED)

# Include Polaris SDK headers
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/src/CombinedApiSample/library/include
  ${CMAKE_CURRENT_SOURCE_DIR}/src/CombinedApiSample/library/src
)

# Define the executable
add_executable(capisample_node
  src/capisample_node.cpp

  # Polaris SDK sources
  src/CombinedApiSample/library/src/BufferedReader.cpp
  src/CombinedApiSample/library/src/CombinedApi.cpp
  src/CombinedApiSample/library/src/ComConnection.cpp
  src/CombinedApiSample/library/src/GbfButton1D.cpp
  src/CombinedApiSample/library/src/GbfComponent.cpp
  src/CombinedApiSample/library/src/GbfContainer.cpp
  src/CombinedApiSample/library/src/GbfData3D.cpp
  src/CombinedApiSample/library/src/GbfData6D.cpp
  src/CombinedApiSample/library/src/GbfFrame.cpp
  src/CombinedApiSample/library/src/GbfSystemAlert.cpp
  src/CombinedApiSample/library/src/MarkerData.cpp
  src/CombinedApiSample/library/src/PortHandleInfo.cpp
  src/CombinedApiSample/library/src/SystemAlert.cpp
  src/CombinedApiSample/library/src/SystemCRC.cpp
  src/CombinedApiSample/library/src/TcpConnection.cpp
  src/CombinedApiSample/library/src/ToolData.cpp
  src/CombinedApiSample/library/src/Transform.cpp
)


ament_target_dependencies(capisample_node rclcpp geometry_msgs ament_index_cpp)

install(TARGETS
  capisample_node
  DESTINATION lib/${PROJECT_NAME}
)
install(DIRECTORY src/sroms
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
