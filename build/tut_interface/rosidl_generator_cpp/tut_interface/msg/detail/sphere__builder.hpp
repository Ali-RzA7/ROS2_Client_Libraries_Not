// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tut_interface:msg/Sphere.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACE__MSG__DETAIL__SPHERE__BUILDER_HPP_
#define TUT_INTERFACE__MSG__DETAIL__SPHERE__BUILDER_HPP_

#include "tut_interface/msg/detail/sphere__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tut_interface
{

namespace msg
{

namespace builder
{

class Init_Sphere_radius
{
public:
  explicit Init_Sphere_radius(::tut_interface::msg::Sphere & msg)
  : msg_(msg)
  {}
  ::tut_interface::msg::Sphere radius(::tut_interface::msg::Sphere::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interface::msg::Sphere msg_;
};

class Init_Sphere_center
{
public:
  Init_Sphere_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sphere_radius center(::tut_interface::msg::Sphere::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_Sphere_radius(msg_);
  }

private:
  ::tut_interface::msg::Sphere msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interface::msg::Sphere>()
{
  return tut_interface::msg::builder::Init_Sphere_center();
}

}  // namespace tut_interface

#endif  // TUT_INTERFACE__MSG__DETAIL__SPHERE__BUILDER_HPP_
