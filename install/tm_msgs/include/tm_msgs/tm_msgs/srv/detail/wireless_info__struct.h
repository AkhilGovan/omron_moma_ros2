// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tm_msgs:srv/WirelessInfo.idl
// generated code does not contain a copyright notice

#ifndef TM_MSGS__SRV__DETAIL__WIRELESS_INFO__STRUCT_H_
#define TM_MSGS__SRV__DETAIL__WIRELESS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'param1'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WirelessInfo in the package tm_msgs.
typedef struct tm_msgs__srv__WirelessInfo_Request
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String param1;
} tm_msgs__srv__WirelessInfo_Request;

// Struct for a sequence of tm_msgs__srv__WirelessInfo_Request.
typedef struct tm_msgs__srv__WirelessInfo_Request__Sequence
{
  tm_msgs__srv__WirelessInfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__WirelessInfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/WirelessInfo in the package tm_msgs.
typedef struct tm_msgs__srv__WirelessInfo_Response
{
  rosidl_runtime_c__String status;
} tm_msgs__srv__WirelessInfo_Response;

// Struct for a sequence of tm_msgs__srv__WirelessInfo_Response.
typedef struct tm_msgs__srv__WirelessInfo_Response__Sequence
{
  tm_msgs__srv__WirelessInfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tm_msgs__srv__WirelessInfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TM_MSGS__SRV__DETAIL__WIRELESS_INFO__STRUCT_H_
