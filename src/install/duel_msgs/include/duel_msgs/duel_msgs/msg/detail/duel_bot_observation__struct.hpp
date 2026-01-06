// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "duel_msgs/msg/duel_bot_observation.hpp"


#ifndef DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__STRUCT_HPP_
#define DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'relative_target_position'
// Member 'shoulder_vel'
// Member 'wrist_vel'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'sword_rotation'
// Member 'shoulder_rotation'
// Member 'wrist_rotation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__duel_msgs__msg__DuelBotObservation __attribute__((deprecated))
#else
# define DEPRECATED__duel_msgs__msg__DuelBotObservation __declspec(deprecated)
#endif

namespace duel_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DuelBotObservation_
{
  using Type = DuelBotObservation_<ContainerAllocator>;

  explicit DuelBotObservation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_target_position(_init),
    sword_rotation(_init),
    shoulder_rotation(_init),
    wrist_rotation(_init),
    shoulder_vel(_init),
    wrist_vel(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elbow_rotation = 0.0f;
      this->elbow_vel = 0.0f;
    }
  }

  explicit DuelBotObservation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : relative_target_position(_alloc, _init),
    sword_rotation(_alloc, _init),
    shoulder_rotation(_alloc, _init),
    wrist_rotation(_alloc, _init),
    shoulder_vel(_alloc, _init),
    wrist_vel(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elbow_rotation = 0.0f;
      this->elbow_vel = 0.0f;
    }
  }

  // field types and members
  using _relative_target_position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _relative_target_position_type relative_target_position;
  using _sword_rotation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _sword_rotation_type sword_rotation;
  using _shoulder_rotation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _shoulder_rotation_type shoulder_rotation;
  using _elbow_rotation_type =
    float;
  _elbow_rotation_type elbow_rotation;
  using _wrist_rotation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _wrist_rotation_type wrist_rotation;
  using _shoulder_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _shoulder_vel_type shoulder_vel;
  using _elbow_vel_type =
    float;
  _elbow_vel_type elbow_vel;
  using _wrist_vel_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _wrist_vel_type wrist_vel;

  // setters for named parameter idiom
  Type & set__relative_target_position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->relative_target_position = _arg;
    return *this;
  }
  Type & set__sword_rotation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->sword_rotation = _arg;
    return *this;
  }
  Type & set__shoulder_rotation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->shoulder_rotation = _arg;
    return *this;
  }
  Type & set__elbow_rotation(
    const float & _arg)
  {
    this->elbow_rotation = _arg;
    return *this;
  }
  Type & set__wrist_rotation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->wrist_rotation = _arg;
    return *this;
  }
  Type & set__shoulder_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->shoulder_vel = _arg;
    return *this;
  }
  Type & set__elbow_vel(
    const float & _arg)
  {
    this->elbow_vel = _arg;
    return *this;
  }
  Type & set__wrist_vel(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->wrist_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    duel_msgs::msg::DuelBotObservation_<ContainerAllocator> *;
  using ConstRawPtr =
    const duel_msgs::msg::DuelBotObservation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      duel_msgs::msg::DuelBotObservation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      duel_msgs::msg::DuelBotObservation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__duel_msgs__msg__DuelBotObservation
    std::shared_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__duel_msgs__msg__DuelBotObservation
    std::shared_ptr<duel_msgs::msg::DuelBotObservation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DuelBotObservation_ & other) const
  {
    if (this->relative_target_position != other.relative_target_position) {
      return false;
    }
    if (this->sword_rotation != other.sword_rotation) {
      return false;
    }
    if (this->shoulder_rotation != other.shoulder_rotation) {
      return false;
    }
    if (this->elbow_rotation != other.elbow_rotation) {
      return false;
    }
    if (this->wrist_rotation != other.wrist_rotation) {
      return false;
    }
    if (this->shoulder_vel != other.shoulder_vel) {
      return false;
    }
    if (this->elbow_vel != other.elbow_vel) {
      return false;
    }
    if (this->wrist_vel != other.wrist_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const DuelBotObservation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DuelBotObservation_

// alias to use template instance with default allocator
using DuelBotObservation =
  duel_msgs::msg::DuelBotObservation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace duel_msgs

#endif  // DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__STRUCT_HPP_
