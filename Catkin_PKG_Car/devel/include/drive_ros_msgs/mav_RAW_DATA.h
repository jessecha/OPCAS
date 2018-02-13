// Generated by gencpp from file drive_ros_msgs/mav_RAW_DATA.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_MAV_RAW_DATA_H
#define DRIVE_ROS_MSGS_MESSAGE_MAV_RAW_DATA_H


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
struct mav_RAW_DATA_
{
  typedef mav_RAW_DATA_<ContainerAllocator> Type;

  mav_RAW_DATA_()
    : channel(0)
    , data()  {
    }
  mav_RAW_DATA_(const ContainerAllocator& _alloc)
    : channel(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _channel_type;
  _channel_type channel;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _data_type;
  _data_type data;


    enum { CH_COMM0 = 0u };
     enum { CH_COMM1 = 1u };
     enum { CH_COMM2 = 2u };
     enum { CH_COMM3 = 3u };
 

  typedef boost::shared_ptr< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> const> ConstPtr;

}; // struct mav_RAW_DATA_

typedef ::drive_ros_msgs::mav_RAW_DATA_<std::allocator<void> > mav_RAW_DATA;

typedef boost::shared_ptr< ::drive_ros_msgs::mav_RAW_DATA > mav_RAW_DATAPtr;
typedef boost::shared_ptr< ::drive_ros_msgs::mav_RAW_DATA const> mav_RAW_DATAConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace drive_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'drive_ros_msgs': ['/home/nvidia/catkin_ws/src/drive_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe139ce95f69f25b7328e7afd6d8fcfe";
  }

  static const char* value(const ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe139ce95f69f25bULL;
  static const uint64_t static_value2 = 0x7328e7afd6d8fcfeULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/mav_RAW_DATA";
  }

  static const char* value(const ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 channel\n\
    uint8 CH_COMM0=0\n\
    uint8 CH_COMM1=1\n\
    uint8 CH_COMM2=2\n\
    uint8 CH_COMM3=3\n\
uint8[] data\n\
";
  }

  static const char* value(const ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.channel);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mav_RAW_DATA_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::mav_RAW_DATA_<ContainerAllocator>& v)
  {
    s << indent << "channel: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.channel);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_MAV_RAW_DATA_H
