// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "duel_msgs/msg/duel_bot_observation.hpp"


#ifndef DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__TRAITS_HPP_
#define DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "duel_msgs/msg/detail/duel_bot_observation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'relative_target_position'
// Member 'shoulder_vel'
// Member 'wrist_vel'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'sword_rotation'
// Member 'shoulder_rotation'
// Member 'wrist_rotation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace duel_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DuelBotObservation & msg,
  std::ostream & out)
{
  out << "{";
  // member: relative_target_position
  {
    out << "relative_target_position: ";
    to_flow_style_yaml(msg.relative_target_position, out);
    out << ", ";
  }

  // member: sword_rotation
  {
    out << "sword_rotation: ";
    to_flow_style_yaml(msg.sword_rotation, out);
    out << ", ";
  }

  // member: shoulder_rotation
  {
    out << "shoulder_rotation: ";
    to_flow_style_yaml(msg.shoulder_rotation, out);
    out << ", ";
  }

  // member: elbow_rotation
  {
    out << "elbow_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_rotation, out);
    out << ", ";
  }

  // member: wrist_rotation
  {
    out << "wrist_rotation: ";
    to_flow_style_yaml(msg.wrist_rotation, out);
    out << ", ";
  }

  // member: shoulder_vel
  {
    out << "shoulder_vel: ";
    to_flow_style_yaml(msg.shoulder_vel, out);
    out << ", ";
  }

  // member: elbow_vel
  {
    out << "elbow_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_vel, out);
    out << ", ";
  }

  // member: wrist_vel
  {
    out << "wrist_vel: ";
    to_flow_style_yaml(msg.wrist_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DuelBotObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: relative_target_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_target_position:\n";
    to_block_style_yaml(msg.relative_target_position, out, indentation + 2);
  }

  // member: sword_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sword_rotation:\n";
    to_block_style_yaml(msg.sword_rotation, out, indentation + 2);
  }

  // member: shoulder_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoulder_rotation:\n";
    to_block_style_yaml(msg.shoulder_rotation, out, indentation + 2);
  }

  // member: elbow_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_rotation, out);
    out << "\n";
  }

  // member: wrist_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_rotation:\n";
    to_block_style_yaml(msg.wrist_rotation, out, indentation + 2);
  }

  // member: shoulder_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shoulder_vel:\n";
    to_block_style_yaml(msg.shoulder_vel, out, indentation + 2);
  }

  // member: elbow_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elbow_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.elbow_vel, out);
    out << "\n";
  }

  // member: wrist_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrist_vel:\n";
    to_block_style_yaml(msg.wrist_vel, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DuelBotObservation & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace duel_msgs

namespace rosidl_generator_traits
{

[[deprecated("use duel_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const duel_msgs::msg::DuelBotObservation & msg,
  std::ostream & out, size_t indentation = 0)
{
  duel_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use duel_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const duel_msgs::msg::DuelBotObservation & msg)
{
  return duel_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<duel_msgs::msg::DuelBotObservation>()
{
  return "duel_msgs::msg::DuelBotObservation";
}

template<>
inline const char * name<duel_msgs::msg::DuelBotObservation>()
{
  return "duel_msgs/msg/DuelBotObservation";
}

template<>
struct has_fixed_size<duel_msgs::msg::DuelBotObservation>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<duel_msgs::msg::DuelBotObservation>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<duel_msgs::msg::DuelBotObservation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__TRAITS_HPP_
