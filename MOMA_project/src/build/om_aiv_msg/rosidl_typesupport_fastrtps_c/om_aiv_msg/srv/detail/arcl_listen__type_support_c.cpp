// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from om_aiv_msg:srv/ArclListen.idl
// generated code does not contain a copyright notice
#include "om_aiv_msg/srv/detail/arcl_listen__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "om_aiv_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "om_aiv_msg/srv/detail/arcl_listen__struct.h"
#include "om_aiv_msg/srv/detail/arcl_listen__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // resp_header
#include "rosidl_runtime_c/string_functions.h"  // resp_header

// forward declare type support functions


using _ArclListen_Request__ros_msg_type = om_aiv_msg__srv__ArclListen_Request;

static bool _ArclListen_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArclListen_Request__ros_msg_type * ros_message = static_cast<const _ArclListen_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: resp_header
  {
    const rosidl_runtime_c__String * str = &ros_message->resp_header;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ArclListen_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArclListen_Request__ros_msg_type * ros_message = static_cast<_ArclListen_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: resp_header
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->resp_header.data) {
      rosidl_runtime_c__String__init(&ros_message->resp_header);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->resp_header,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'resp_header'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_om_aiv_msg
size_t get_serialized_size_om_aiv_msg__srv__ArclListen_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArclListen_Request__ros_msg_type * ros_message = static_cast<const _ArclListen_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resp_header
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->resp_header.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArclListen_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_om_aiv_msg__srv__ArclListen_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_om_aiv_msg
size_t max_serialized_size_om_aiv_msg__srv__ArclListen_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: resp_header
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = om_aiv_msg__srv__ArclListen_Request;
    is_plain =
      (
      offsetof(DataType, resp_header) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArclListen_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_om_aiv_msg__srv__ArclListen_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArclListen_Request = {
  "om_aiv_msg::srv",
  "ArclListen_Request",
  _ArclListen_Request__cdr_serialize,
  _ArclListen_Request__cdr_deserialize,
  _ArclListen_Request__get_serialized_size,
  _ArclListen_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArclListen_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArclListen_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, om_aiv_msg, srv, ArclListen_Request)() {
  return &_ArclListen_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "om_aiv_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_listen__struct.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_listen__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // resp_text
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // resp_text

// forward declare type support functions


using _ArclListen_Response__ros_msg_type = om_aiv_msg__srv__ArclListen_Response;

static bool _ArclListen_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArclListen_Response__ros_msg_type * ros_message = static_cast<const _ArclListen_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resp_text
  {
    const rosidl_runtime_c__String * str = &ros_message->resp_text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ArclListen_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArclListen_Response__ros_msg_type * ros_message = static_cast<_ArclListen_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: resp_text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->resp_text.data) {
      rosidl_runtime_c__String__init(&ros_message->resp_text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->resp_text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'resp_text'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_om_aiv_msg
size_t get_serialized_size_om_aiv_msg__srv__ArclListen_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArclListen_Response__ros_msg_type * ros_message = static_cast<const _ArclListen_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name resp_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->resp_text.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArclListen_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_om_aiv_msg__srv__ArclListen_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_om_aiv_msg
size_t max_serialized_size_om_aiv_msg__srv__ArclListen_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: resp_text
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = om_aiv_msg__srv__ArclListen_Response;
    is_plain =
      (
      offsetof(DataType, resp_text) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArclListen_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_om_aiv_msg__srv__ArclListen_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArclListen_Response = {
  "om_aiv_msg::srv",
  "ArclListen_Response",
  _ArclListen_Response__cdr_serialize,
  _ArclListen_Response__cdr_deserialize,
  _ArclListen_Response__get_serialized_size,
  _ArclListen_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArclListen_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArclListen_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, om_aiv_msg, srv, ArclListen_Response)() {
  return &_ArclListen_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "om_aiv_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "om_aiv_msg/srv/arcl_listen.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArclListen__callbacks = {
  "om_aiv_msg::srv",
  "ArclListen",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, om_aiv_msg, srv, ArclListen_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, om_aiv_msg, srv, ArclListen_Response)(),
};

static rosidl_service_type_support_t ArclListen__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArclListen__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, om_aiv_msg, srv, ArclListen)() {
  return &ArclListen__handle;
}

#if defined(__cplusplus)
}
#endif
