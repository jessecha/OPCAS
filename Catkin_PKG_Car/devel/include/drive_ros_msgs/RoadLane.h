// Generated by gencpp from file drive_ros_msgs/RoadLane.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_ROADLANE_H
#define DRIVE_ROS_MSGS_MESSAGE_ROADLANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PointStamped.h>

namespace drive_ros_msgs
{
template <class ContainerAllocator>
struct RoadLane_
{
  typedef RoadLane_<ContainerAllocator> Type;

  RoadLane_()
    : header()
    , points()
    , roadStateType(0)  {
    }
  RoadLane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , points(_alloc)
    , roadStateType(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::PointStamped_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::PointStamped_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef uint8_t _roadStateType_type;
  _roadStateType_type roadStateType;


    enum { UNKNOWN = 0u };
     enum { STRAIGHT = 1u };
     enum { STRAIGHT_CURVE = 2u };
     enum { CURVE = 3u };
 

  typedef boost::shared_ptr< ::drive_ros_msgs::RoadLane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::RoadLane_<ContainerAllocator> const> ConstPtr;

}; // struct RoadLane_

typedef ::drive_ros_msgs::RoadLane_<std::allocator<void> > RoadLane;

typedef boost::shared_ptr< ::drive_ros_msgs::RoadLane > RoadLanePtr;
typedef boost::shared_ptr< ::drive_ros_msgs::RoadLane const> RoadLaneConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::RoadLane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::RoadLane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::RoadLane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::RoadLane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "05cb982bf8b1f912f4a91cbf36ba54b0";
  }

  static const char* value(const ::drive_ros_msgs::RoadLane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x05cb982bf8b1f912ULL;
  static const uint64_t static_value2 = 0xf4a91cbf36ba54b0ULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/RoadLane";
  }

  static const char* value(const ::drive_ros_msgs::RoadLane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Port of RoadLane from LMS:\n\
Header header\n\
# lane points\n\
geometry_msgs/PointStamped[] points\n\
# type of lane\n\
uint8 UNKNOWN=0\n\
uint8 STRAIGHT=1\n\
uint8 STRAIGHT_CURVE=2\n\
uint8 CURVE = 3\n\
uint8 roadStateType\n\
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
MSG: geometry_msgs/PointStamped\n\
# This represents a Point with reference coordinate frame and timestamp\n\
Header header\n\
Point point\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::drive_ros_msgs::RoadLane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.points);
      stream.next(m.roadStateType);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoadLane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::RoadLane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::RoadLane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::PointStamped_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "roadStateType: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.roadStateType);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_ROADLANE_H
