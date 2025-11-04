// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from om_aiv_msg:srv/AmrCmd.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__SRV__DETAIL__AMR_CMD__TRAITS_HPP_
#define OM_AIV_MSG__SRV__DETAIL__AMR_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "om_aiv_msg/srv/detail/amr_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace om_aiv_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const AmrCmd_Request & msg,
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
    out << ", ";
  }

  // member: param2
  {
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AmrCmd_Request & msg,
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

  // member: param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AmrCmd_Request & msg, bool use_flow_style = false)
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

}  // namespace om_aiv_msg

namespace rosidl_generator_traits
{

[[deprecated("use om_aiv_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const om_aiv_msg::srv::AmrCmd_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  om_aiv_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use om_aiv_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const om_aiv_msg::srv::AmrCmd_Request & msg)
{
  return om_aiv_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<om_aiv_msg::srv::AmrCmd_Request>()
{
  return "om_aiv_msg::srv::AmrCmd_Request";
}

template<>
inline const char * name<om_aiv_msg::srv::AmrCmd_Request>()
{
  return "om_aiv_msg/srv/AmrCmd_Request";
}

template<>
struct has_fixed_size<om_aiv_msg::srv::AmrCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<om_aiv_msg::srv::AmrCmd_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<om_aiv_msg::srv::AmrCmd_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace om_aiv_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const AmrCmd_Response & msg,
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
  const AmrCmd_Response & msg,
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

inline std::string to_yaml(const AmrCmd_Response & msg, bool use_flow_style = false)
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

}  // namespace om_aiv_msg

namespace rosidl_generator_traits
{

[[deprecated("use om_aiv_msg::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const om_aiv_msg::srv::AmrCmd_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  om_aiv_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use om_aiv_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const om_aiv_msg::srv::AmrCmd_Response & msg)
{
  return om_aiv_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<om_aiv_msg::srv::AmrCmd_Response>()
{
  return "om_aiv_msg::srv::AmrCmd_Response";
}

template<>
inline const char * name<om_aiv_msg::srv::AmrCmd_Response>()
{
  return "om_aiv_msg/srv/AmrCmd_Response";
}

template<>
struct has_fixed_size<om_aiv_msg::srv::AmrCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<om_aiv_msg::srv::AmrCmd_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<om_aiv_msg::srv::AmrCmd_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<om_aiv_msg::srv::AmrCmd>()
{
  return "om_aiv_msg::srv::AmrCmd";
}

template<>
inline const char * name<om_aiv_msg::srv::AmrCmd>()
{
  return "om_aiv_msg/srv/AmrCmd";
}

template<>
struct has_fixed_size<om_aiv_msg::srv::AmrCmd>
  : std::integral_constant<
    bool,
    has_fixed_size<om_aiv_msg::srv::AmrCmd_Request>::value &&
    has_fixed_size<om_aiv_msg::srv::AmrCmd_Response>::value
  >
{
};

template<>
struct has_bounded_size<om_aiv_msg::srv::AmrCmd>
  : std::integral_constant<
    bool,
    has_bounded_size<om_aiv_msg::srv::AmrCmd_Request>::value &&
    has_bounded_size<om_aiv_msg::srv::AmrCmd_Response>::value
  >
{
};

template<>
struct is_service<om_aiv_msg::srv::AmrCmd>
  : std::true_type
{
};

template<>
struct is_service_request<om_aiv_msg::srv::AmrCmd_Request>
  : std::true_type
{
};

template<>
struct is_service_response<om_aiv_msg::srv::AmrCmd_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OM_AIV_MSG__SRV__DETAIL__AMR_CMD__TRAITS_HPP_
