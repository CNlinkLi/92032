// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosmsg:msg/MotorOutputMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/motor_output_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__TRAITS_HPP_
#define ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosmsg/msg/detail/motor_output_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosmsg
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorOutputMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: curr_pos
  {
    out << "curr_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_pos, out);
    out << ", ";
  }

  // member: curr_torq
  {
    out << "curr_torq: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_torq, out);
    out << ", ";
  }

  // member: curr_speed
  {
    out << "curr_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_speed, out);
    out << ", ";
  }

  // member: curr_kp
  {
    out << "curr_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_kp, out);
    out << ", ";
  }

  // member: curr_kd
  {
    out << "curr_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_kd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorOutputMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: curr_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_pos, out);
    out << "\n";
  }

  // member: curr_torq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_torq: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_torq, out);
    out << "\n";
  }

  // member: curr_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_speed, out);
    out << "\n";
  }

  // member: curr_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_kp, out);
    out << "\n";
  }

  // member: curr_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curr_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.curr_kd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorOutputMsg & msg, bool use_flow_style = false)
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

}  // namespace rosmsg

namespace rosidl_generator_traits
{

[[deprecated("use rosmsg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rosmsg::msg::MotorOutputMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosmsg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosmsg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosmsg::msg::MotorOutputMsg & msg)
{
  return rosmsg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosmsg::msg::MotorOutputMsg>()
{
  return "rosmsg::msg::MotorOutputMsg";
}

template<>
inline const char * name<rosmsg::msg::MotorOutputMsg>()
{
  return "rosmsg/msg/MotorOutputMsg";
}

template<>
struct has_fixed_size<rosmsg::msg::MotorOutputMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosmsg::msg::MotorOutputMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosmsg::msg::MotorOutputMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSMSG__MSG__DETAIL__MOTOR_OUTPUT_MSG__TRAITS_HPP_
