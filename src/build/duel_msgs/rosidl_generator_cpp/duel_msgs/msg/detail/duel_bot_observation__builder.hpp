// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from duel_msgs:msg/DuelBotObservation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "duel_msgs/msg/duel_bot_observation.hpp"


#ifndef DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__BUILDER_HPP_
#define DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "duel_msgs/msg/detail/duel_bot_observation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace duel_msgs
{

namespace msg
{

namespace builder
{

class Init_DuelBotObservation_wrist_vel
{
public:
  explicit Init_DuelBotObservation_wrist_vel(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  ::duel_msgs::msg::DuelBotObservation wrist_vel(::duel_msgs::msg::DuelBotObservation::_wrist_vel_type arg)
  {
    msg_.wrist_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_elbow_vel
{
public:
  explicit Init_DuelBotObservation_elbow_vel(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  Init_DuelBotObservation_wrist_vel elbow_vel(::duel_msgs::msg::DuelBotObservation::_elbow_vel_type arg)
  {
    msg_.elbow_vel = std::move(arg);
    return Init_DuelBotObservation_wrist_vel(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_shoulder_vel
{
public:
  explicit Init_DuelBotObservation_shoulder_vel(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  Init_DuelBotObservation_elbow_vel shoulder_vel(::duel_msgs::msg::DuelBotObservation::_shoulder_vel_type arg)
  {
    msg_.shoulder_vel = std::move(arg);
    return Init_DuelBotObservation_elbow_vel(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_wrist_rotation
{
public:
  explicit Init_DuelBotObservation_wrist_rotation(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  Init_DuelBotObservation_shoulder_vel wrist_rotation(::duel_msgs::msg::DuelBotObservation::_wrist_rotation_type arg)
  {
    msg_.wrist_rotation = std::move(arg);
    return Init_DuelBotObservation_shoulder_vel(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_elbow_rotation
{
public:
  explicit Init_DuelBotObservation_elbow_rotation(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  Init_DuelBotObservation_wrist_rotation elbow_rotation(::duel_msgs::msg::DuelBotObservation::_elbow_rotation_type arg)
  {
    msg_.elbow_rotation = std::move(arg);
    return Init_DuelBotObservation_wrist_rotation(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_shoulder_rotation
{
public:
  explicit Init_DuelBotObservation_shoulder_rotation(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  Init_DuelBotObservation_elbow_rotation shoulder_rotation(::duel_msgs::msg::DuelBotObservation::_shoulder_rotation_type arg)
  {
    msg_.shoulder_rotation = std::move(arg);
    return Init_DuelBotObservation_elbow_rotation(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_sword_rotation
{
public:
  explicit Init_DuelBotObservation_sword_rotation(::duel_msgs::msg::DuelBotObservation & msg)
  : msg_(msg)
  {}
  Init_DuelBotObservation_shoulder_rotation sword_rotation(::duel_msgs::msg::DuelBotObservation::_sword_rotation_type arg)
  {
    msg_.sword_rotation = std::move(arg);
    return Init_DuelBotObservation_shoulder_rotation(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

class Init_DuelBotObservation_relative_target_position
{
public:
  Init_DuelBotObservation_relative_target_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DuelBotObservation_sword_rotation relative_target_position(::duel_msgs::msg::DuelBotObservation::_relative_target_position_type arg)
  {
    msg_.relative_target_position = std::move(arg);
    return Init_DuelBotObservation_sword_rotation(msg_);
  }

private:
  ::duel_msgs::msg::DuelBotObservation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::duel_msgs::msg::DuelBotObservation>()
{
  return duel_msgs::msg::builder::Init_DuelBotObservation_relative_target_position();
}

}  // namespace duel_msgs

#endif  // DUEL_MSGS__MSG__DETAIL__DUEL_BOT_OBSERVATION__BUILDER_HPP_
