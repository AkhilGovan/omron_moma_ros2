// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from om_aiv_msg:srv/AmrCmd.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__SRV__DETAIL__AMR_CMD__BUILDER_HPP_
#define OM_AIV_MSG__SRV__DETAIL__AMR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "om_aiv_msg/srv/detail/amr_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace om_aiv_msg
{

namespace srv
{

namespace builder
{

class Init_AmrCmd_Request_param2
{
public:
  explicit Init_AmrCmd_Request_param2(::om_aiv_msg::srv::AmrCmd_Request & msg)
  : msg_(msg)
  {}
  ::om_aiv_msg::srv::AmrCmd_Request param2(::om_aiv_msg::srv::AmrCmd_Request::_param2_type arg)
  {
    msg_.param2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::om_aiv_msg::srv::AmrCmd_Request msg_;
};

class Init_AmrCmd_Request_param1
{
public:
  explicit Init_AmrCmd_Request_param1(::om_aiv_msg::srv::AmrCmd_Request & msg)
  : msg_(msg)
  {}
  Init_AmrCmd_Request_param2 param1(::om_aiv_msg::srv::AmrCmd_Request::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return Init_AmrCmd_Request_param2(msg_);
  }

private:
  ::om_aiv_msg::srv::AmrCmd_Request msg_;
};

class Init_AmrCmd_Request_command
{
public:
  Init_AmrCmd_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AmrCmd_Request_param1 command(::om_aiv_msg::srv::AmrCmd_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_AmrCmd_Request_param1(msg_);
  }

private:
  ::om_aiv_msg::srv::AmrCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::om_aiv_msg::srv::AmrCmd_Request>()
{
  return om_aiv_msg::srv::builder::Init_AmrCmd_Request_command();
}

}  // namespace om_aiv_msg


namespace om_aiv_msg
{

namespace srv
{

namespace builder
{

class Init_AmrCmd_Response_status
{
public:
  Init_AmrCmd_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::om_aiv_msg::srv::AmrCmd_Response status(::om_aiv_msg::srv::AmrCmd_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::om_aiv_msg::srv::AmrCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::om_aiv_msg::srv::AmrCmd_Response>()
{
  return om_aiv_msg::srv::builder::Init_AmrCmd_Response_status();
}

}  // namespace om_aiv_msg

#endif  // OM_AIV_MSG__SRV__DETAIL__AMR_CMD__BUILDER_HPP_
