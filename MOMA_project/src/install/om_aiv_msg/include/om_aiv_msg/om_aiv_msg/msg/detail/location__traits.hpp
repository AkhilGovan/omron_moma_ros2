// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from om_aiv_msg:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define OM_AIV_MSG__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "om_aiv_msg/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace om_aiv_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Location & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: theta
  {
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: theta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "theta: ";
    rosidl_generator_traits::value_to_yaml(msg.theta, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Location & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace om_aiv_msg

namespace rosidl_generator_traits
{

[[deprecated("use om_aiv_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const om_aiv_msg::msg::Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  om_aiv_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use om_aiv_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const om_aiv_msg::msg::Location & msg)
{
  return om_aiv_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<om_aiv_msg::msg::Location>()
{
  return "om_aiv_msg::msg::Location";
}

template<>
inline const char * name<om_aiv_msg::msg::Location>()
{
  return "om_aiv_msg/msg/Location";
}

template<>
struct has_fixed_size<om_aiv_msg::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<om_aiv_msg::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<om_aiv_msg::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OM_AIV_MSG__MSG__DETAIL__LOCATION__TRAITS_HPP_
