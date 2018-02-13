// Generated by gencpp from file drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_BOOL.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONFIG_PARAM_SET_BOOL_H
#define DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONFIG_PARAM_SET_BOOL_H


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
struct mav_cc16_CONFIG_PARAM_SET_BOOL_
{
  typedef mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> Type;

  mav_cc16_CONFIG_PARAM_SET_BOOL_()
    : sysid(0)
    , compid(0)
    , config_id(0)
    , param_id(0)
    , value(0)  {
    }
  mav_cc16_CONFIG_PARAM_SET_BOOL_(const ContainerAllocator& _alloc)
    : sysid(0)
    , compid(0)
    , config_id(0)
    , param_id(0)
    , value(0)  {
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

   typedef uint8_t _value_type;
  _value_type value;


    enum { ID = 201u };
 

  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> const> ConstPtr;

}; // struct mav_cc16_CONFIG_PARAM_SET_BOOL_

typedef ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<std::allocator<void> > mav_cc16_CONFIG_PARAM_SET_BOOL;

typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL > mav_cc16_CONFIG_PARAM_SET_BOOLPtr;
typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL const> mav_cc16_CONFIG_PARAM_SET_BOOLConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
{
  static const char* value()
  {
    return "201091ac52e82b29670be63faf14daef";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x201091ac52e82b29ULL;
  static const uint64_t static_value2 = 0x670be63faf14daefULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/mav_cc16_CONFIG_PARAM_SET_BOOL";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Automatically Generated in 2017-06-12 22:33:47.453220\n\
# MESSAGE: CONFIG_PARAM_SET_BOOL\n\
# Description:Set new config parameter bool value\n\
uint8 ID = 201\n\
uint8 sysid\n\
uint8 compid\n\
\n\
uint8 config_id     # ID of the configuration set\n\
uint8 param_id      # ID of the configuration parameter within the config set\n\
uint8 value         # New parameter value\n\
";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
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
  }; // struct mav_cc16_CONFIG_PARAM_SET_BOOL_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::mav_cc16_CONFIG_PARAM_SET_BOOL_<ContainerAllocator>& v)
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
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONFIG_PARAM_SET_BOOL_H
