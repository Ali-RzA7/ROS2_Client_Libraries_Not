// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tut_interface:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef TUT_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
#define TUT_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_

#include "tut_interface/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tut_interface
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tut_interface::msg::Num num(::tut_interface::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tut_interface::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tut_interface::msg::Num>()
{
  return tut_interface::msg::builder::Init_Num_num();
}

}  // namespace tut_interface

#endif  // TUT_INTERFACE__MSG__DETAIL__NUM__BUILDER_HPP_
