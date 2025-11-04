// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tm_msgs:srv/MovementRequest.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__MOVEMENT_REQUEST__BUILDER_HPP_
#define TM_MSGS__SRV__DETAIL__MOVEMENT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tm_msgs/srv/detail/movement_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_MovementRequest_Request_positions
{
public:
  explicit Init_MovementRequest_Request_positions(::tm_msgs::srv::MovementRequest_Request & msg)
  : msg_(msg)
  {}
  ::tm_msgs::srv::MovementRequest_Request positions(::tm_msgs::srv::MovementRequest_Request::_positions_type arg)
  {
    msg_.positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::MovementRequest_Request msg_;
};

class Init_MovementRequest_Request_command
{
public:
  Init_MovementRequest_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementRequest_Request_positions command(::tm_msgs::srv::MovementRequest_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MovementRequest_Request_positions(msg_);
  }

private:
  ::tm_msgs::srv::MovementRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::MovementRequest_Request>()
{
  return tm_msgs::srv::builder::Init_MovementRequest_Request_command();
}

}  // namespace tm_msgs


namespace tm_msgs
{

namespace srv
{

namespace builder
{

class Init_MovementRequest_Response_success
{
public:
  Init_MovementRequest_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tm_msgs::srv::MovementRequest_Response success(::tm_msgs::srv::MovementRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tm_msgs::srv::MovementRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tm_msgs::srv::MovementRequest_Response>()
{
  return tm_msgs::srv::builder::Init_MovementRequest_Response_success();
}

}  // namespace tm_msgs

#endif  // TM_MSGS__SRV__DETAIL__MOVEMENT_REQUEST__BUILDER_HPP_
