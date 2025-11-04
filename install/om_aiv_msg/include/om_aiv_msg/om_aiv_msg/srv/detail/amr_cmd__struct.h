// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from om_aiv_msg:srv/AmrCmd.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__SRV__DETAIL__AMR_CMD__STRUCT_H_
#define OM_AIV_MSG__SRV__DETAIL__AMR_CMD__STRUCT_H_

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
// Member 'param2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AmrCmd in the package om_aiv_msg.
typedef struct om_aiv_msg__srv__AmrCmd_Request
{
  /// move, setheading
  rosidl_runtime_c__String command;
  /// (mm) for move, degree in setheading
  rosidl_runtime_c__String param1;
  rosidl_runtime_c__String param2;
} om_aiv_msg__srv__AmrCmd_Request;

// Struct for a sequence of om_aiv_msg__srv__AmrCmd_Request.
typedef struct om_aiv_msg__srv__AmrCmd_Request__Sequence
{
  om_aiv_msg__srv__AmrCmd_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} om_aiv_msg__srv__AmrCmd_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AmrCmd in the package om_aiv_msg.
typedef struct om_aiv_msg__srv__AmrCmd_Response
{
  rosidl_runtime_c__String status;
} om_aiv_msg__srv__AmrCmd_Response;

// Struct for a sequence of om_aiv_msg__srv__AmrCmd_Response.
typedef struct om_aiv_msg__srv__AmrCmd_Response__Sequence
{
  om_aiv_msg__srv__AmrCmd_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} om_aiv_msg__srv__AmrCmd_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OM_AIV_MSG__SRV__DETAIL__AMR_CMD__STRUCT_H_
