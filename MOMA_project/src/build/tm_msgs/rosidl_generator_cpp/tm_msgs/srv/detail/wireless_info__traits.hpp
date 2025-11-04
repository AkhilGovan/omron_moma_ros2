// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tm_msgs:srv/WirelessInfo.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__WIRELESS_INFO__TRAITS_HPP_
#define TM_MSGS__SRV__DETAIL__WIRELESS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tm_msgs/srv/detail/wireless_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WirelessInfo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: param1
  {
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WirelessInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WirelessInfo_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_msgs::srv::WirelessInfo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_msgs::srv::WirelessInfo_Request & msg)
{
  return tm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_msgs::srv::WirelessInfo_Request>()
{
  return "tm_msgs::srv::WirelessInfo_Request";
}

template<>
inline const char * name<tm_msgs::srv::WirelessInfo_Request>()
{
  return "tm_msgs/srv/WirelessInfo_Request";
}

template<>
struct has_fixed_size<tm_msgs::srv::WirelessInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tm_msgs::srv::WirelessInfo_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tm_msgs::srv::WirelessInfo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace tm_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WirelessInfo_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WirelessInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WirelessInfo_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace tm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tm_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tm_msgs::srv::WirelessInfo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  tm_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tm_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const tm_msgs::srv::WirelessInfo_Response & msg)
{
  return tm_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<tm_msgs::srv::WirelessInfo_Response>()
{
  return "tm_msgs::srv::WirelessInfo_Response";
}

template<>
inline const char * name<tm_msgs::srv::WirelessInfo_Response>()
{
  return "tm_msgs/srv/WirelessInfo_Response";
}

template<>
struct has_fixed_size<tm_msgs::srv::WirelessInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tm_msgs::srv::WirelessInfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tm_msgs::srv::WirelessInfo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tm_msgs::srv::WirelessInfo>()
{
  return "tm_msgs::srv::WirelessInfo";
}

template<>
inline const char * name<tm_msgs::srv::WirelessInfo>()
{
  return "tm_msgs/srv/WirelessInfo";
}

template<>
struct has_fixed_size<tm_msgs::srv::WirelessInfo>
  : std::integral_constant<
    bool,
    has_fixed_size<tm_msgs::srv::WirelessInfo_Request>::value &&
    has_fixed_size<tm_msgs::srv::WirelessInfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<tm_msgs::srv::WirelessInfo>
  : std::integral_constant<
    bool,
    has_bounded_size<tm_msgs::srv::WirelessInfo_Request>::value &&
    has_bounded_size<tm_msgs::srv::WirelessInfo_Response>::value
  >
{
};

template<>
struct is_service<tm_msgs::srv::WirelessInfo>
  : std::true_type
{
};

template<>
struct is_service_request<tm_msgs::srv::WirelessInfo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tm_msgs::srv::WirelessInfo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TM_MSGS__SRV__DETAIL__WIRELESS_INFO__TRAITS_HPP_
