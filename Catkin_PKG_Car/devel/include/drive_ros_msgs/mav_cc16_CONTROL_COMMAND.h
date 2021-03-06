// Generated by gencpp from file drive_ros_msgs/mav_cc16_CONTROL_COMMAND.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONTROL_COMMAND_H
#define DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONTROL_COMMAND_H


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
struct mav_cc16_CONTROL_COMMAND_
{
  typedef mav_cc16_CONTROL_COMMAND_<ContainerAllocator> Type;

  mav_cc16_CONTROL_COMMAND_()
    : sysid(0)
    , compid(0)
    , velocity(0.0)
    , steering_front(0.0)
    , steering_rear(0.0)
    , indicator_left(0)
    , indicator_right(0)  {
    }
  mav_cc16_CONTROL_COMMAND_(const ContainerAllocator& _alloc)
    : sysid(0)
    , compid(0)
    , velocity(0.0)
    , steering_front(0.0)
    , steering_rear(0.0)
    , indicator_left(0)
    , indicator_right(0)  {
  (void)_alloc;
    }



   typedef uint8_t _sysid_type;
  _sysid_type sysid;

   typedef uint8_t _compid_type;
  _compid_type compid;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _steering_front_type;
  _steering_front_type steering_front;

   typedef float _steering_rear_type;
  _steering_rear_type steering_rear;

   typedef uint8_t _indicator_left_type;
  _indicator_left_type indicator_left;

   typedef uint8_t _indicator_right_type;
  _indicator_right_type indicator_right;


    enum { ID = 64u };
     enum { INDICATOR_OFF = 0u };
     enum { INDICATOR_ON = 1u };
 

  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> const> ConstPtr;

}; // struct mav_cc16_CONTROL_COMMAND_

typedef ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<std::allocator<void> > mav_cc16_CONTROL_COMMAND;

typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND > mav_cc16_CONTROL_COMMANDPtr;
typedef boost::shared_ptr< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND const> mav_cc16_CONTROL_COMMANDConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
{
  static const char* value()
  {
    return "db3d4778273e5bde28a0418e456620d4";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdb3d4778273e5bdeULL;
  static const uint64_t static_value2 = 0x28a0418e456620d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/mav_cc16_CONTROL_COMMAND";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Automatically Generated in 2017-06-12 22:33:47.452827\n\
# MESSAGE: CONTROL_COMMAND\n\
# Description: Control command data\n\
uint8 ID = 64\n\
uint8 sysid\n\
uint8 compid\n\
\n\
float32 velocity            # Desired velocity [m/s]\n\
float32 steering_front      # Front axle steering angle [rad]\n\
float32 steering_rear       # Rear axle steering angle [rad]\n\
uint8 indicator_left        # Left turn signal indicator\n\
uint8 indicator_right       # Right turn signal indicator\n\
\n\
uint8 INDICATOR_OFF = 0 # turn indicator off\n\
uint8 INDICATOR_ON  = 1 # turn indicator on\n\
";
  }

  static const char* value(const ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sysid);
      stream.next(m.compid);
      stream.next(m.velocity);
      stream.next(m.steering_front);
      stream.next(m.steering_rear);
      stream.next(m.indicator_left);
      stream.next(m.indicator_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mav_cc16_CONTROL_COMMAND_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::mav_cc16_CONTROL_COMMAND_<ContainerAllocator>& v)
  {
    s << indent << "sysid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysid);
    s << indent << "compid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compid);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "steering_front: ";
    Printer<float>::stream(s, indent + "  ", v.steering_front);
    s << indent << "steering_rear: ";
    Printer<float>::stream(s, indent + "  ", v.steering_rear);
    s << indent << "indicator_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.indicator_left);
    s << indent << "indicator_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.indicator_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_MAV_CC16_CONTROL_COMMAND_H
