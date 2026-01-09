// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosmsg:msg/RosCanImuMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rosmsg/msg/ros_can_imu_msg.hpp"


#ifndef ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__TRAITS_HPP_
#define ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rosmsg/msg/detail/ros_can_imu_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rosmsg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosCanImuMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: qurd_x
  {
    out << "qurd_x: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_x, out);
    out << ", ";
  }

  // member: qurd_y
  {
    out << "qurd_y: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_y, out);
    out << ", ";
  }

  // member: qurd_z
  {
    out << "qurd_z: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_z, out);
    out << ", ";
  }

  // member: qurd_w
  {
    out << "qurd_w: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_w, out);
    out << ", ";
  }

  // member: gravity_x
  {
    out << "gravity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_x, out);
    out << ", ";
  }

  // member: gravity_y
  {
    out << "gravity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_y, out);
    out << ", ";
  }

  // member: gravity_z
  {
    out << "gravity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_z, out);
    out << ", ";
  }

  // member: ang_roll
  {
    out << "ang_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_roll, out);
    out << ", ";
  }

  // member: ang_yaw
  {
    out << "ang_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_yaw, out);
    out << ", ";
  }

  // member: ang_pitch
  {
    out << "ang_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_pitch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosCanImuMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: qurd_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qurd_x: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_x, out);
    out << "\n";
  }

  // member: qurd_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qurd_y: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_y, out);
    out << "\n";
  }

  // member: qurd_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qurd_z: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_z, out);
    out << "\n";
  }

  // member: qurd_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qurd_w: ";
    rosidl_generator_traits::value_to_yaml(msg.qurd_w, out);
    out << "\n";
  }

  // member: gravity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_x: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_x, out);
    out << "\n";
  }

  // member: gravity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_y: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_y, out);
    out << "\n";
  }

  // member: gravity_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gravity_z: ";
    rosidl_generator_traits::value_to_yaml(msg.gravity_z, out);
    out << "\n";
  }

  // member: ang_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_roll, out);
    out << "\n";
  }

  // member: ang_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_yaw, out);
    out << "\n";
  }

  // member: ang_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_pitch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosCanImuMsg & msg, bool use_flow_style = false)
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
  const rosmsg::msg::RosCanImuMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  rosmsg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rosmsg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rosmsg::msg::RosCanImuMsg & msg)
{
  return rosmsg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rosmsg::msg::RosCanImuMsg>()
{
  return "rosmsg::msg::RosCanImuMsg";
}

template<>
inline const char * name<rosmsg::msg::RosCanImuMsg>()
{
  return "rosmsg/msg/RosCanImuMsg";
}

template<>
struct has_fixed_size<rosmsg::msg::RosCanImuMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosmsg::msg::RosCanImuMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosmsg::msg::RosCanImuMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSMSG__MSG__DETAIL__ROS_CAN_IMU_MSG__TRAITS_HPP_
