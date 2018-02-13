// Generated by gencpp from file drive_ros_msgs/mav_cc16_ODOMETER_DELTA_RAW.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_ODOMETER_DELTA_RAW_H
#define DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_ODOMETER_DELTA_RAW_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace drive_ros_msgs
{
template <class ContainerAllocator>
struct mav_cc16_ODOMETER_DELTA_RAW_
{
  typedef mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> Type;

  mav_cc16_ODOMETER_DELTA_RAW_()
    : header()
    , sysid(0)
    , compid(0)
    , delta(0.0)
    , dist()
    , quality(0)  {
    }
  mav_cc16_ODOMETER_DELTA_RAW_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sysid(0)
    , compid(0)
    , delta(0.0)
    , dist(_alloc)
    , quality(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _sysid_type;
  _sysid_type sysid;

   typedef uint8_t _compid_type;
  _compid_type compid;

   typedef float _delta_type;
  _delta_type delta;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _dist_type;
  _dist_type dist;

   typedef int16_t _quality_type;
  _quality_type quality;


    enum { ID = 139u };
 

  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> const> ConstPtr;

}; // struct mav_cc16_ODOMETER_DELTA_RAW_

typedef ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<std::allocator<void> > mav_cc16_ODOMETER_DELTA_RAW;

typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW > mav_cc16_ODOMETER_DELTA_RAWPtr;
typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW const> mav_cc16_ODOMETER_DELTA_RAWConstPtr;

// constants requiring out of line definition

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drive_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'drive_ros_msgs': ['/home/nvidia/catkin_ws/src/drive_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3cd1530ac50990b701a8843eddb26f4";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3cd1530ac50990bULL;
  static const uint64_t static_value2 = 0x701a8843eddb26f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/mav_cc16_ODOMETER_DELTA_RAW";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Automatically Generated in 2017-06-12 22:33:47.452947\n\
# MESSAGE: ODOMETER_DELTA_RAW\n\
# Description:Measurement of Odometry Sensor within a time-period (raw ticks)\n\
Header header\n\
\n\
uint8 ID = 139\n\
uint8 sysid\n\
uint8 compid\n\
\n\
float32 delta                   # Time-delta within which the measurement has taken place [s]\n\
geometry_msgs/Vector3 dist      # Distance travelled within period [ticks]\n\
int16 quality                   # Measurement quality indicator (-1 for no quality)\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sysid);
      stream.next(m.compid);
      stream.next(m.delta);
      stream.next(m.dist);
      stream.next(m.quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mav_cc16_ODOMETER_DELTA_RAW_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::mav_cc16_ODOMETER_DELTA_RAW_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sysid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysid);
    s << indent << "compid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compid);
    s << indent << "delta: ";
    Printer<float>::stream(s, indent + "  ", v.delta);
    s << indent << "dist: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.dist);
    s << indent << "quality: ";
    Printer<int16_t>::stream(s, indent + "  ", v.quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_ODOMETER_DELTA_RAW_H
