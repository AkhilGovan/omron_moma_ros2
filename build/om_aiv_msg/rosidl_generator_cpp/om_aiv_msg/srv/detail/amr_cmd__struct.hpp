// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from om_aiv_msg:srv/AmrCmd.idl
// generated code does not contain a copyright notice

#ifndef OM_AIV_MSG__SRV__DETAIL__AMR_CMD__STRUCT_HPP_
#define OM_AIV_MSG__SRV__DETAIL__AMR_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__om_aiv_msg__srv__AmrCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__om_aiv_msg__srv__AmrCmd_Request __declspec(deprecated)
#endif

namespace om_aiv_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AmrCmd_Request_
{
  using Type = AmrCmd_Request_<ContainerAllocator>;

  explicit AmrCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->param1 = "";
      this->param2 = "";
    }
  }

  explicit AmrCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    param1(_alloc),
    param2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->param1 = "";
      this->param2 = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _param1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _param1_type param1;
  using _param2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _param2_type param2;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__param1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->param1 = _arg;
    return *this;
  }
  Type & set__param2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->param2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__om_aiv_msg__srv__AmrCmd_Request
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__om_aiv_msg__srv__AmrCmd_Request
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmrCmd_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->param1 != other.param1) {
      return false;
    }
    if (this->param2 != other.param2) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmrCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmrCmd_Request_

// alias to use template instance with default allocator
using AmrCmd_Request =
  om_aiv_msg::srv::AmrCmd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace om_aiv_msg


#ifndef _WIN32
# define DEPRECATED__om_aiv_msg__srv__AmrCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__om_aiv_msg__srv__AmrCmd_Response __declspec(deprecated)
#endif

namespace om_aiv_msg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AmrCmd_Response_
{
  using Type = AmrCmd_Response_<ContainerAllocator>;

  explicit AmrCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit AmrCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__om_aiv_msg__srv__AmrCmd_Response
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__om_aiv_msg__srv__AmrCmd_Response
    std::shared_ptr<om_aiv_msg::srv::AmrCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmrCmd_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmrCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmrCmd_Response_

// alias to use template instance with default allocator
using AmrCmd_Response =
  om_aiv_msg::srv::AmrCmd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace om_aiv_msg

namespace om_aiv_msg
{

namespace srv
{

struct AmrCmd
{
  using Request = om_aiv_msg::srv::AmrCmd_Request;
  using Response = om_aiv_msg::srv::AmrCmd_Response;
};

}  // namespace srv

}  // namespace om_aiv_msg

#endif  // OM_AIV_MSG__SRV__DETAIL__AMR_CMD__STRUCT_HPP_
