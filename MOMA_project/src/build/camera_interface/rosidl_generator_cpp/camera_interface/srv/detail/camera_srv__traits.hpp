// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface:srv/CameraSrv.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__TRAITS_HPP_
#define CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface/srv/detail/camera_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraSrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: identifier
  {
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSrv_Request & msg,
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

  // member: identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSrv_Request & msg, bool use_flow_style = false)
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

}  // namespace camera_interface

namespace rosidl_generator_traits
{

[[deprecated("use camera_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_interface::srv::CameraSrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface::srv::CameraSrv_Request & msg)
{
  return camera_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface::srv::CameraSrv_Request>()
{
  return "camera_interface::srv::CameraSrv_Request";
}

template<>
inline const char * name<camera_interface::srv::CameraSrv_Request>()
{
  return "camera_interface/srv/CameraSrv_Request";
}

template<>
struct has_fixed_size<camera_interface::srv::CameraSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface::srv::CameraSrv_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface::srv::CameraSrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace camera_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const CameraSrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinates
  {
    if (msg.coordinates.size() == 0) {
      out << "coordinates: []";
    } else {
      out << "coordinates: [";
      size_t pending_items = msg.coordinates.size();
      for (auto item : msg.coordinates) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordinates.size() == 0) {
      out << "coordinates: []\n";
    } else {
      out << "coordinates:\n";
      for (auto item : msg.coordinates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraSrv_Response & msg, bool use_flow_style = false)
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

}  // namespace camera_interface

namespace rosidl_generator_traits
{

[[deprecated("use camera_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_interface::srv::CameraSrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface::srv::CameraSrv_Response & msg)
{
  return camera_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface::srv::CameraSrv_Response>()
{
  return "camera_interface::srv::CameraSrv_Response";
}

template<>
inline const char * name<camera_interface::srv::CameraSrv_Response>()
{
  return "camera_interface/srv/CameraSrv_Response";
}

template<>
struct has_fixed_size<camera_interface::srv::CameraSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface::srv::CameraSrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface::srv::CameraSrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<camera_interface::srv::CameraSrv>()
{
  return "camera_interface::srv::CameraSrv";
}

template<>
inline const char * name<camera_interface::srv::CameraSrv>()
{
  return "camera_interface/srv/CameraSrv";
}

template<>
struct has_fixed_size<camera_interface::srv::CameraSrv>
  : std::integral_constant<
    bool,
    has_fixed_size<camera_interface::srv::CameraSrv_Request>::value &&
    has_fixed_size<camera_interface::srv::CameraSrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<camera_interface::srv::CameraSrv>
  : std::integral_constant<
    bool,
    has_bounded_size<camera_interface::srv::CameraSrv_Request>::value &&
    has_bounded_size<camera_interface::srv::CameraSrv_Response>::value
  >
{
};

template<>
struct is_service<camera_interface::srv::CameraSrv>
  : std::true_type
{
};

template<>
struct is_service_request<camera_interface::srv::CameraSrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<camera_interface::srv::CameraSrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__TRAITS_HPP_
