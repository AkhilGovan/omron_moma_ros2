// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/WirelessInfo.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__WIRELESS_INFO__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__WIRELESS_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tm_msgs/srv/detail/wireless_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_WirelessInfo_Request_param1
{
public:
  explicit Init_WirelessInfo_Request_param1(::tm_msgs::srv::WirelessInfo_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::WirelessInfo_Request param1(::tm_msgs::srv::WirelessInfo_Request::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::WirelessInfo_Request msg_;
};

class Init_WirelessInfo_Request_command
{
public:
  Init_WirelessInfo_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WirelessInfo_Request_param1 command(::tm_msgs::srv::WirelessInfo_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_WirelessInfo_Request_param1(msg_);
  }

private:
  ::tm_msgs::srv::WirelessInfo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::WirelessInfo_Request>()
{
  return tm_msgs::srv::builder::Init_WirelessInfo_Request_command();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_WirelessInfo_Response_status
{
public:
  Init_WirelessInfo_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::WirelessInfo_Response status(::tm_msgs::srv::WirelessInfo_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::WirelessInfo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::WirelessInfo_Response>()
{
  return tm_msgs::srv::builder::Init_WirelessInfo_Response_status();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__WIRELESS_INFO__BUILDER_HPP_
