// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface:srv/CameraSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface/srv/detail/camera_srv__rosidl_typesupport_introspection_c.h"
#include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface/srv/detail/camera_srv__functions.h"
#include "camera_interface/srv/detail/camera_srv__struct.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__srv__CameraSrv_Request__init(message_memory);
}

void camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_fini_function(void * message_memory)
{
  camera_interface__srv__CameraSrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_member_array[2] = {
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__srv__CameraSrv_Request, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "identifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__srv__CameraSrv_Request, identifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_members = {
  "camera_interface__srv",  // message namespace
  "CameraSrv_Request",  // message name
  2,  // number of fields
  sizeof(camera_interface__srv__CameraSrv_Request),
  camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_member_array,  // message members
  camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_type_support_handle = {
  0,
  &camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv_Request)() {
  if (!camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_type_support_handle.typesupport_identifier) {
    camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface__srv__CameraSrv_Request__rosidl_typesupport_introspection_c__CameraSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "camera_interface/srv/detail/camera_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "camera_interface/srv/detail/camera_srv__functions.h"
// already included above
// #include "camera_interface/srv/detail/camera_srv__struct.h"


// Include directives for member types
// Member `coordinates`
#include "geometry_msgs/msg/point.h"
// Member `coordinates`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__srv__CameraSrv_Response__init(message_memory);
}

void camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_fini_function(void * message_memory)
{
  camera_interface__srv__CameraSrv_Response__fini(message_memory);
}

size_t camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__size_function__CameraSrv_Response__coordinates(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__get_const_function__CameraSrv_Response__coordinates(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__get_function__CameraSrv_Response__coordinates(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__fetch_function__CameraSrv_Response__coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__get_const_function__CameraSrv_Response__coordinates(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__assign_function__CameraSrv_Response__coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__get_function__CameraSrv_Response__coordinates(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__resize_function__CameraSrv_Response__coordinates(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_member_array[3] = {
  {
    "coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__srv__CameraSrv_Response, coordinates),  // bytes offset in struct
    NULL,  // default value
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__size_function__CameraSrv_Response__coordinates,  // size() function pointer
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__get_const_function__CameraSrv_Response__coordinates,  // get_const(index) function pointer
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__get_function__CameraSrv_Response__coordinates,  // get(index) function pointer
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__fetch_function__CameraSrv_Response__coordinates,  // fetch(index, &value) function pointer
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__assign_function__CameraSrv_Response__coordinates,  // assign(index, value) function pointer
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__resize_function__CameraSrv_Response__coordinates  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__srv__CameraSrv_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__srv__CameraSrv_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_members = {
  "camera_interface__srv",  // message namespace
  "CameraSrv_Response",  // message name
  3,  // number of fields
  sizeof(camera_interface__srv__CameraSrv_Response),
  camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_member_array,  // message members
  camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_type_support_handle = {
  0,
  &camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv_Response)() {
  camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_type_support_handle.typesupport_identifier) {
    camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface__srv__CameraSrv_Response__rosidl_typesupport_introspection_c__CameraSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "camera_interface/srv/detail/camera_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_members = {
  "camera_interface__srv",  // service namespace
  "CameraSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_Request_message_type_support_handle,
  NULL  // response message
  // camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_type_support_handle = {
  0,
  &camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv)() {
  if (!camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_type_support_handle.typesupport_identifier) {
    camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, srv, CameraSrv_Response)()->data;
  }

  return &camera_interface__srv__detail__camera_srv__rosidl_typesupport_introspection_c__CameraSrv_service_type_support_handle;
}
