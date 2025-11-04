// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface:srv/CameraSrv.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__BUILDER_HPP_
#define CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface/srv/detail/camera_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface
{

namespace srv
{

namespace builder
{

class Init_CameraSrv_Request_identifier
{
public:
  explicit Init_CameraSrv_Request_identifier(::camera_interface::srv::CameraSrv_Request & msg)
  : msg_(msg)
  {}
  ::camera_interface::srv::CameraSrv_Request identifier(::camera_interface::srv::CameraSrv_Request::_identifier_type arg)
  {
    msg_.identifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface::srv::CameraSrv_Request msg_;
};

class Init_CameraSrv_Request_command
{
public:
  Init_CameraSrv_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSrv_Request_identifier command(::camera_interface::srv::CameraSrv_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_CameraSrv_Request_identifier(msg_);
  }

private:
  ::camera_interface::srv::CameraSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface::srv::CameraSrv_Request>()
{
  return camera_interface::srv::builder::Init_CameraSrv_Request_command();
}

}  // namespace camera_interface


namespace camera_interface
{

namespace srv
{

namespace builder
{

class Init_CameraSrv_Response_message
{
public:
  explicit Init_CameraSrv_Response_message(::camera_interface::srv::CameraSrv_Response & msg)
  : msg_(msg)
  {}
  ::camera_interface::srv::CameraSrv_Response message(::camera_interface::srv::CameraSrv_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface::srv::CameraSrv_Response msg_;
};

class Init_CameraSrv_Response_success
{
public:
  explicit Init_CameraSrv_Response_success(::camera_interface::srv::CameraSrv_Response & msg)
  : msg_(msg)
  {}
  Init_CameraSrv_Response_message success(::camera_interface::srv::CameraSrv_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CameraSrv_Response_message(msg_);
  }

private:
  ::camera_interface::srv::CameraSrv_Response msg_;
};

class Init_CameraSrv_Response_coordinates
{
public:
  Init_CameraSrv_Response_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSrv_Response_success coordinates(::camera_interface::srv::CameraSrv_Response::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_CameraSrv_Response_success(msg_);
  }

private:
  ::camera_interface::srv::CameraSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface::srv::CameraSrv_Response>()
{
  return camera_interface::srv::builder::Init_CameraSrv_Response_coordinates();
}

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__BUILDER_HPP_
