// Generated by gencpp from file drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_FLOAT.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONFIG_PARAM_SET_FLOAT_H
#define DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONFIG_PARAM_SET_FLOAT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace drive_ros_msgs
{
template <class ContainerAllocator>
struct mav_cc16_CONFIG_PARAM_SET_FLOAT_
{
  typedef mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> Type;

  mav_cc16_CONFIG_PARAM_SET_FLOAT_()
    : sysid(0)
    , compid(0)
    , config_id(0)
    , param_id(0)
    , value(0.0)  {
    }
  mav_cc16_CONFIG_PARAM_SET_FLOAT_(const ContainerAllocator& _alloc)
    : sysid(0)
    , compid(0)
    , config_id(0)
    , param_id(0)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _sysid_type;
  _sysid_type sysid;

   typedef uint8_t _compid_type;
  _compid_type compid;

   typedef uint8_t _config_id_type;
  _config_id_type config_id;

   typedef uint8_t _param_id_type;
  _param_id_type param_id;

   typedef float _value_type;
  _value_type value;


    enum { ID = 202u };
 

  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> const> ConstPtr;

}; // struct mav_cc16_CONFIG_PARAM_SET_FLOAT_

typedef ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<std::allocator<void> > mav_cc16_CONFIG_PARAM_SET_FLOAT;

typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT > mav_cc16_CONFIG_PARAM_SET_FLOATPtr;
typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT const> mav_cc16_CONFIG_PARAM_SET_FLOATConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drive_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'drive_ros_msgs': ['/home/nvidia/catkin_ws/src/drive_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "00d5e75142c82f1d5d368f2e81384b0e";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x00d5e75142c82f1dULL;
  static const uint64_t static_value2 = 0x5d368f2e81384b0eULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_FLOAT";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Automatically Generated in 2017-06-12 22:33:47.453237\n\
# MESSAGE: CONFIG_PARAM_SET_FLOAT\n\
# Description:Set new config parameter float value\n\
uint8 ID = 202\n\
uint8 sysid\n\
uint8 compid\n\
\n\
uint8 config_id     # ID of the configuration set\n\
uint8 param_id      # ID of the configuration parameter within the config set\n\
float32 value       # New parameter value\n\
";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sysid);
      stream.next(m.compid);
      stream.next(m.config_id);
      stream.next(m.param_id);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mav_cc16_CONFIG_PARAM_SET_FLOAT_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_FLOAT_<ContainerAllocator>& v)
  {
    s << indent << "sysid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysid);
    s << indent << "compid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compid);
    s << indent << "config_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.config_id);
    s << indent << "param_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.param_id);
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONFIG_PARAM_SET_FLOAT_H
