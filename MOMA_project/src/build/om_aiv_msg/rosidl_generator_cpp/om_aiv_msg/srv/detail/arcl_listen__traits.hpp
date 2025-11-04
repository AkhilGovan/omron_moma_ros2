// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from om_aiv_msg:srv/ArclListen.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__TRAITS_HPP_
#define OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "om_aiv_msg/srv/detail/arcl_listen__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace om_aiv_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArclListen_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: resp_header
  {
    out << "resp_header: ";
    rosidl_generator_traits::value_to_yaml(msg.resp_header, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArclListen_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resp_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resp_header: ";
    rosidl_generator_traits::value_to_yaml(msg.resp_header, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArclListen_Request & msg, bool use_flow_style = false)
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
  const om_aiv_msg::srv::ArclListen_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  om_aiv_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use om_aiv_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const om_aiv_msg::srv::ArclListen_Request & msg)
{
  return om_aiv_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<om_aiv_msg::srv::ArclListen_Request>()
{
  return "om_aiv_msg::srv::ArclListen_Request";
}

template<>
inline const char * name<om_aiv_msg::srv::ArclListen_Request>()
{
  return "om_aiv_msg/srv/ArclListen_Request";
}

template<>
struct has_fixed_size<om_aiv_msg::srv::ArclListen_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<om_aiv_msg::srv::ArclListen_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<om_aiv_msg::srv::ArclListen_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace om_aiv_msg
{

namespace srv
{

inline void to_flow_style_yaml(
  const ArclListen_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: resp_text
  {
    out << "resp_text: ";
    rosidl_generator_traits::value_to_yaml(msg.resp_text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArclListen_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resp_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resp_text: ";
    rosidl_generator_traits::value_to_yaml(msg.resp_text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArclListen_Response & msg, bool use_flow_style = false)
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
  const om_aiv_msg::srv::ArclListen_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  om_aiv_msg::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use om_aiv_msg::srv::to_yaml() instead")]]
inline std::string to_yaml(const om_aiv_msg::srv::ArclListen_Response & msg)
{
  return om_aiv_msg::srv::to_yaml(msg);
}

template<>
inline const char * data_type<om_aiv_msg::srv::ArclListen_Response>()
{
  return "om_aiv_msg::srv::ArclListen_Response";
}

template<>
inline const char * name<om_aiv_msg::srv::ArclListen_Response>()
{
  return "om_aiv_msg/srv/ArclListen_Response";
}

template<>
struct has_fixed_size<om_aiv_msg::srv::ArclListen_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<om_aiv_msg::srv::ArclListen_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<om_aiv_msg::srv::ArclListen_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<om_aiv_msg::srv::ArclListen>()
{
  return "om_aiv_msg::srv::ArclListen";
}

template<>
inline const char * name<om_aiv_msg::srv::ArclListen>()
{
  return "om_aiv_msg/srv/ArclListen";
}

template<>
struct has_fixed_size<om_aiv_msg::srv::ArclListen>
  : std::integral_constant<
    bool,
    has_fixed_size<om_aiv_msg::srv::ArclListen_Request>::value &&
    has_fixed_size<om_aiv_msg::srv::ArclListen_Response>::value
  >
{
};

template<>
struct has_bounded_size<om_aiv_msg::srv::ArclListen>
  : std::integral_constant<
    bool,
    has_bounded_size<om_aiv_msg::srv::ArclListen_Request>::value &&
    has_bounded_size<om_aiv_msg::srv::ArclListen_Response>::value
  >
{
};

template<>
struct is_service<om_aiv_msg::srv::ArclListen>
  : std::true_type
{
};

template<>
struct is_service_request<om_aiv_msg::srv::ArclListen_Request>
  : std::true_type
{
};

template<>
struct is_service_response<om_aiv_msg::srv::ArclListen_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OM_AIV_MSG__SRV__DETAIL__ARCL_LISTEN__TRAITS_HPP_
