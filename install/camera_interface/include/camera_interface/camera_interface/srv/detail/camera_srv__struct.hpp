// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface:srv/CameraSrv.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__STRUCT_HPP_
#define CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface__srv__CameraSrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__srv__CameraSrv_Request __declspec(deprecated)
#endif

namespace camera_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraSrv_Request_
{
  using Type = CameraSrv_Request_<ContainerAllocator>;

  explicit CameraSrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->identifier = 0l;
    }
  }

  explicit CameraSrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->identifier = 0l;
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _identifier_type =
    int32_t;
  _identifier_type identifier;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__identifier(
    const int32_t & _arg)
  {
    this->identifier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::srv::CameraSrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::srv::CameraSrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::srv::CameraSrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::srv::CameraSrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__srv__CameraSrv_Request
    std::shared_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__srv__CameraSrv_Request
    std::shared_ptr<camera_interface::srv::CameraSrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSrv_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->identifier != other.identifier) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSrv_Request_

// alias to use template instance with default allocator
using CameraSrv_Request =
  camera_interface::srv::CameraSrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_interface


// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__camera_interface__srv__CameraSrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__srv__CameraSrv_Response __declspec(deprecated)
#endif

namespace camera_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CameraSrv_Response_
{
  using Type = CameraSrv_Response_<ContainerAllocator>;

  explicit CameraSrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CameraSrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _coordinates_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _coordinates_type coordinates;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__coordinates(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::srv::CameraSrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::srv::CameraSrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::srv::CameraSrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::srv::CameraSrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__srv__CameraSrv_Response
    std::shared_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__srv__CameraSrv_Response
    std::shared_ptr<camera_interface::srv::CameraSrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraSrv_Response_ & other) const
  {
    if (this->coordinates != other.coordinates) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraSrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraSrv_Response_

// alias to use template instance with default allocator
using CameraSrv_Response =
  camera_interface::srv::CameraSrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace camera_interface

namespace camera_interface
{

namespace srv
{

struct CameraSrv
{
  using Request = camera_interface::srv::CameraSrv_Request;
  using Response = camera_interface::srv::CameraSrv_Response;
};

}  // namespace srv

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__SRV__DETAIL__CAMERA_SRV__STRUCT_HPP_
