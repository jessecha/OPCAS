// Generated by gencpp from file drive_ros_msgs/Homography.msg
// DO NOT EDIT!


#ifndef DRIVE_ROS_MSGS_MESSAGE_HOMOGRAPHY_H
#define DRIVE_ROS_MSGS_MESSAGE_HOMOGRAPHY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Float64MultiArray.h>
#include <std_msgs/Float64MultiArray.h>

namespace drive_ros_msgs
{
template <class ContainerAllocator>
struct Homography_
{
  typedef Homography_<ContainerAllocator> Type;

  Homography_()
    : world2cam()
    , cam2world()  {
    }
  Homography_(const ContainerAllocator& _alloc)
    : world2cam(_alloc)
    , cam2world(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Float64MultiArray_<ContainerAllocator>  _world2cam_type;
  _world2cam_type world2cam;

   typedef  ::std_msgs::Float64MultiArray_<ContainerAllocator>  _cam2world_type;
  _cam2world_type cam2world;




  typedef boost::shared_ptr< ::drive_ros_msgs::Homography_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::drive_ros_msgs::Homography_<ContainerAllocator> const> ConstPtr;

}; // struct Homography_

typedef ::drive_ros_msgs::Homography_<std::allocator<void> > Homography;

typedef boost::shared_ptr< ::drive_ros_msgs::Homography > HomographyPtr;
typedef boost::shared_ptr< ::drive_ros_msgs::Homography const> HomographyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::drive_ros_msgs::Homography_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::drive_ros_msgs::Homography_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::drive_ros_msgs::Homography_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::drive_ros_msgs::Homography_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::Homography_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::drive_ros_msgs::Homography_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::Homography_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::drive_ros_msgs::Homography_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::drive_ros_msgs::Homography_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0a59e30c90c7be9d3ae607a62c4b1a6";
  }

  static const char* value(const ::drive_ros_msgs::Homography_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0a59e30c90c7be9ULL;
  static const uint64_t static_value2 = 0xd3ae607a62c4b1a6ULL;
};

template<class ContainerAllocator>
struct DataType< ::drive_ros_msgs::Homography_<ContainerAllocator> >
{
  static const char* value()
  {
    return "drive_ros_msgs/Homography";
  }

  static const char* value(const ::drive_ros_msgs::Homography_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::drive_ros_msgs::Homography_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Float64MultiArray world2cam\n\
std_msgs/Float64MultiArray cam2world\n\
\n\
================================================================================\n\
MSG: std_msgs/Float64MultiArray\n\
# Please look at the MultiArrayLayout message definition for\n\
# documentation on all multiarrays.\n\
\n\
MultiArrayLayout  layout        # specification of data layout\n\
float64[]         data          # array of data\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayLayout\n\
# The multiarray declares a generic multi-dimensional array of a\n\
# particular data type.  Dimensions are ordered from outer most\n\
# to inner most.\n\
\n\
MultiArrayDimension[] dim # Array of dimension properties\n\
uint32 data_offset        # padding elements at front of data\n\
\n\
# Accessors should ALWAYS be written in terms of dimension stride\n\
# and specified outer-most dimension first.\n\
# \n\
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\n\
#\n\
# A standard, 3-channel 640x480 image with interleaved color channels\n\
# would be specified as:\n\
#\n\
# dim[0].label  = \"height\"\n\
# dim[0].size   = 480\n\
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\n\
# dim[1].label  = \"width\"\n\
# dim[1].size   = 640\n\
# dim[1].stride = 3*640 = 1920\n\
# dim[2].label  = \"channel\"\n\
# dim[2].size   = 3\n\
# dim[2].stride = 3\n\
#\n\
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayDimension\n\
string label   # label of given dimension\n\
uint32 size    # size of given dimension (in type units)\n\
uint32 stride  # stride of given dimension\n\
";
  }

  static const char* value(const ::drive_ros_msgs::Homography_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::drive_ros_msgs::Homography_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.world2cam);
      stream.next(m.cam2world);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Homography_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::drive_ros_msgs::Homography_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::drive_ros_msgs::Homography_<ContainerAllocator>& v)
  {
    s << indent << "world2cam: ";
    s << std::endl;
    Printer< ::std_msgs::Float64MultiArray_<ContainerAllocator> >::stream(s, indent + "  ", v.world2cam);
    s << indent << "cam2world: ";
    s << std::endl;
    Printer< ::std_msgs::Float64MultiArray_<ContainerAllocator> >::stream(s, indent + "  ", v.cam2world);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVE_ROS_MSGS_MESSAGE_HOMOGRAPHY_H
