// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from om_aiv_msg:srv/ArclListen.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "om_aiv_msg/srv/detail/arcl_listen__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclListen_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclListen_Request_type_support_ids_t;

static const _ArclListen_Request_type_support_ids_t _ArclListen_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclListen_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclListen_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclListen_Request_type_support_symbol_names_t _ArclListen_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclListen_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclListen_Request)),
  }
};

typedef struct _ArclListen_Request_type_support_data_t
{
  void * data[2];
} _ArclListen_Request_type_support_data_t;

static _ArclListen_Request_type_support_data_t _ArclListen_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclListen_Request_message_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclListen_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ArclListen_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ArclListen_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArclListen_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclListen_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<om_aiv_msg::srv::ArclListen_Request>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclListen_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclListen_Request)() {
  return get_message_type_support_handle<om_aiv_msg::srv::ArclListen_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_listen__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclListen_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclListen_Response_type_support_ids_t;

static const _ArclListen_Response_type_support_ids_t _ArclListen_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclListen_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclListen_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclListen_Response_type_support_symbol_names_t _ArclListen_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclListen_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclListen_Response)),
  }
};

typedef struct _ArclListen_Response_type_support_data_t
{
  void * data[2];
} _ArclListen_Response_type_support_data_t;

static _ArclListen_Response_type_support_data_t _ArclListen_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclListen_Response_message_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclListen_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ArclListen_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ArclListen_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArclListen_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclListen_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<om_aiv_msg::srv::ArclListen_Response>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclListen_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclListen_Response)() {
  return get_message_type_support_handle<om_aiv_msg::srv::ArclListen_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "om_aiv_msg/srv/detail/arcl_listen__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace om_aiv_msg
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArclListen_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArclListen_type_support_ids_t;

static const _ArclListen_type_support_ids_t _ArclListen_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArclListen_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArclListen_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArclListen_type_support_symbol_names_t _ArclListen_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, om_aiv_msg, srv, ArclListen)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, om_aiv_msg, srv, ArclListen)),
  }
};

typedef struct _ArclListen_type_support_data_t
{
  void * data[2];
} _ArclListen_type_support_data_t;

static _ArclListen_type_support_data_t _ArclListen_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArclListen_service_typesupport_map = {
  2,
  "om_aiv_msg",
  &_ArclListen_service_typesupport_ids.typesupport_identifier[0],
  &_ArclListen_service_typesupport_symbol_names.symbol_name[0],
  &_ArclListen_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ArclListen_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArclListen_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace om_aiv_msg

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<om_aiv_msg::srv::ArclListen>()
{
  return &::om_aiv_msg::srv::rosidl_typesupport_cpp::ArclListen_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, om_aiv_msg, srv, ArclListen)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<om_aiv_msg::srv::ArclListen>();
}

#ifdef __cplusplus
}
#endif
