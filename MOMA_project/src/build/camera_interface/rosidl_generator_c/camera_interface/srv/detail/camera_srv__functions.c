// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from camera_interface:srv/CameraSrv.idl
// generated code does not contain a copyright notice
#include "camera_interface/srv/detail/camera_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
camera_interface__srv__CameraSrv_Request__init(camera_interface__srv__CameraSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    camera_interface__srv__CameraSrv_Request__fini(msg);
    return false;
  }
  // identifier
  return true;
}

void
camera_interface__srv__CameraSrv_Request__fini(camera_interface__srv__CameraSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // identifier
}

bool
camera_interface__srv__CameraSrv_Request__are_equal(const camera_interface__srv__CameraSrv_Request * lhs, const camera_interface__srv__CameraSrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // identifier
  if (lhs->identifier != rhs->identifier) {
    return false;
  }
  return true;
}

bool
camera_interface__srv__CameraSrv_Request__copy(
  const camera_interface__srv__CameraSrv_Request * input,
  camera_interface__srv__CameraSrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // identifier
  output->identifier = input->identifier;
  return true;
}

camera_interface__srv__CameraSrv_Request *
camera_interface__srv__CameraSrv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface__srv__CameraSrv_Request * msg = (camera_interface__srv__CameraSrv_Request *)allocator.allocate(sizeof(camera_interface__srv__CameraSrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface__srv__CameraSrv_Request));
  bool success = camera_interface__srv__CameraSrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface__srv__CameraSrv_Request__destroy(camera_interface__srv__CameraSrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface__srv__CameraSrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface__srv__CameraSrv_Request__Sequence__init(camera_interface__srv__CameraSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface__srv__CameraSrv_Request * data = NULL;

  if (size) {
    data = (camera_interface__srv__CameraSrv_Request *)allocator.zero_allocate(size, sizeof(camera_interface__srv__CameraSrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface__srv__CameraSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface__srv__CameraSrv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_interface__srv__CameraSrv_Request__Sequence__fini(camera_interface__srv__CameraSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_interface__srv__CameraSrv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_interface__srv__CameraSrv_Request__Sequence *
camera_interface__srv__CameraSrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface__srv__CameraSrv_Request__Sequence * array = (camera_interface__srv__CameraSrv_Request__Sequence *)allocator.allocate(sizeof(camera_interface__srv__CameraSrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface__srv__CameraSrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface__srv__CameraSrv_Request__Sequence__destroy(camera_interface__srv__CameraSrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface__srv__CameraSrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface__srv__CameraSrv_Request__Sequence__are_equal(const camera_interface__srv__CameraSrv_Request__Sequence * lhs, const camera_interface__srv__CameraSrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface__srv__CameraSrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface__srv__CameraSrv_Request__Sequence__copy(
  const camera_interface__srv__CameraSrv_Request__Sequence * input,
  camera_interface__srv__CameraSrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface__srv__CameraSrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface__srv__CameraSrv_Request * data =
      (camera_interface__srv__CameraSrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface__srv__CameraSrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface__srv__CameraSrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface__srv__CameraSrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `coordinates`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
camera_interface__srv__CameraSrv_Response__init(camera_interface__srv__CameraSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // coordinates
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->coordinates, 0)) {
    camera_interface__srv__CameraSrv_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    camera_interface__srv__CameraSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
camera_interface__srv__CameraSrv_Response__fini(camera_interface__srv__CameraSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // coordinates
  geometry_msgs__msg__Point__Sequence__fini(&msg->coordinates);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
camera_interface__srv__CameraSrv_Response__are_equal(const camera_interface__srv__CameraSrv_Response * lhs, const camera_interface__srv__CameraSrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // coordinates
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->coordinates), &(rhs->coordinates)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
camera_interface__srv__CameraSrv_Response__copy(
  const camera_interface__srv__CameraSrv_Response * input,
  camera_interface__srv__CameraSrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // coordinates
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->coordinates), &(output->coordinates)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

camera_interface__srv__CameraSrv_Response *
camera_interface__srv__CameraSrv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface__srv__CameraSrv_Response * msg = (camera_interface__srv__CameraSrv_Response *)allocator.allocate(sizeof(camera_interface__srv__CameraSrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(camera_interface__srv__CameraSrv_Response));
  bool success = camera_interface__srv__CameraSrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
camera_interface__srv__CameraSrv_Response__destroy(camera_interface__srv__CameraSrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    camera_interface__srv__CameraSrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
camera_interface__srv__CameraSrv_Response__Sequence__init(camera_interface__srv__CameraSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface__srv__CameraSrv_Response * data = NULL;

  if (size) {
    data = (camera_interface__srv__CameraSrv_Response *)allocator.zero_allocate(size, sizeof(camera_interface__srv__CameraSrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = camera_interface__srv__CameraSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        camera_interface__srv__CameraSrv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
camera_interface__srv__CameraSrv_Response__Sequence__fini(camera_interface__srv__CameraSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      camera_interface__srv__CameraSrv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

camera_interface__srv__CameraSrv_Response__Sequence *
camera_interface__srv__CameraSrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  camera_interface__srv__CameraSrv_Response__Sequence * array = (camera_interface__srv__CameraSrv_Response__Sequence *)allocator.allocate(sizeof(camera_interface__srv__CameraSrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = camera_interface__srv__CameraSrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
camera_interface__srv__CameraSrv_Response__Sequence__destroy(camera_interface__srv__CameraSrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    camera_interface__srv__CameraSrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
camera_interface__srv__CameraSrv_Response__Sequence__are_equal(const camera_interface__srv__CameraSrv_Response__Sequence * lhs, const camera_interface__srv__CameraSrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!camera_interface__srv__CameraSrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
camera_interface__srv__CameraSrv_Response__Sequence__copy(
  const camera_interface__srv__CameraSrv_Response__Sequence * input,
  camera_interface__srv__CameraSrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(camera_interface__srv__CameraSrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    camera_interface__srv__CameraSrv_Response * data =
      (camera_interface__srv__CameraSrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!camera_interface__srv__CameraSrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          camera_interface__srv__CameraSrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!camera_interface__srv__CameraSrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
