// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from om_aiv_msg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__MSG__DETAIL__STATUS__TRAITS_HPP_
#define OM_AIV_MSG__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "om_aiv_msg/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'location'
#include "om_aiv_msg/msg/detail/location__traits.hpp"

namespace om_aiv_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: extended_status
  {
    out << "extended_status: ";
    rosidl_generator_traits::value_to_yaml(msg.extended_status, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: state_of_charge
  {
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << ", ";
  }

  // member: localization_score
  {
    out << "localization_score: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_score, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: extended_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extended_status: ";
    rosidl_generator_traits::value_to_yaml(msg.extended_status, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: state_of_charge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state_of_charge: ";
    rosidl_generator_traits::value_to_yaml(msg.state_of_charge, out);
    out << "\n";
  }

  // member: localization_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localization_score: ";
    rosidl_generator_traits::value_to_yaml(msg.localization_score, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
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
  const om_aiv_msg::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  om_aiv_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use om_aiv_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const om_aiv_msg::msg::Status & msg)
{
  return om_aiv_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<om_aiv_msg::msg::Status>()
{
  return "om_aiv_msg::msg::Status";
}

template<>
inline const char * name<om_aiv_msg::msg::Status>()
{
  return "om_aiv_msg/msg/Status";
}

template<>
struct has_fixed_size<om_aiv_msg::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<om_aiv_msg::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<om_aiv_msg::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OM_AIV_MSG__MSG__DETAIL__STATUS__TRAITS_HPP_
