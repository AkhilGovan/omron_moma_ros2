// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:srv/CameraSrv.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__STRUCT_H_
#define CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__STRUCT_H_

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
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CameraSrv in the package camera_interface.
typedef struct camera_interface__srv__CameraSrv_Request
{
  /// "take_photo" or other future commands
  rosidl_runtime_c__String command;
  /// YOLO class ID (64 for mouse, etc.)
  int32_t identifier;
} camera_interface__srv__CameraSrv_Request;

// Struct for a sequence of camera_interface__srv__CameraSrv_Request.
typedef struct camera_interface__srv__CameraSrv_Request__Sequence
{
  camera_interface__srv__CameraSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__srv__CameraSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CameraSrv in the package camera_interface.
typedef struct camera_interface__srv__CameraSrv_Response
{
  /// Array of detected object positions
  geometry_msgs__msg__Point__Sequence coordinates;
  /// Whether detection was successful
  bool success;
  /// Status message
  rosidl_runtime_c__String message;
} camera_interface__srv__CameraSrv_Response;

// Struct for a sequence of camera_interface__srv__CameraSrv_Response.
typedef struct camera_interface__srv__CameraSrv_Response__Sequence
{
  camera_interface__srv__CameraSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__srv__CameraSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__STRUCT_H_
