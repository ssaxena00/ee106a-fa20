// Generated by gencpp from file stdr_msgs/SonarSensorMsg.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_SONARSENSORMSG_H
#define STDR_MSGS_MESSAGE_SONARSENSORMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <stdr_msgs/Noise.h>
#include <geometry_msgs/Pose2D.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct SonarSensorMsg_
{
  typedef SonarSensorMsg_<ContainerAllocator> Type;

  SonarSensorMsg_()
    : maxRange(0.0)
    , minRange(0.0)
    , coneAngle(0.0)
    , frequency(0.0)
    , noise()
    , frame_id()
    , pose()  {
    }
  SonarSensorMsg_(const ContainerAllocator& _alloc)
    : maxRange(0.0)
    , minRange(0.0)
    , coneAngle(0.0)
    , frequency(0.0)
    , noise(_alloc)
    , frame_id(_alloc)
    , pose(_alloc)  {
  (void)_alloc;
    }



   typedef float _maxRange_type;
  _maxRange_type maxRange;

   typedef float _minRange_type;
  _minRange_type minRange;

   typedef float _coneAngle_type;
  _coneAngle_type coneAngle;

   typedef float _frequency_type;
  _frequency_type frequency;

   typedef  ::stdr_msgs::Noise_<ContainerAllocator>  _noise_type;
  _noise_type noise;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _frame_id_type;
  _frame_id_type frame_id;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _pose_type;
  _pose_type pose;





  typedef boost::shared_ptr< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> const> ConstPtr;

}; // struct SonarSensorMsg_

typedef ::stdr_msgs::SonarSensorMsg_<std::allocator<void> > SonarSensorMsg;

typedef boost::shared_ptr< ::stdr_msgs::SonarSensorMsg > SonarSensorMsgPtr;
typedef boost::shared_ptr< ::stdr_msgs::SonarSensorMsg const> SonarSensorMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/sahilsaxena/ros_workspaces/lab4/src/stdr_simulator/stdr_msgs/msg', '/home/sahilsaxena/ros_workspaces/lab4/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8b8bd75b2e357572ea0c9ee72ed58c1";
  }

  static const char* value(const ::stdr_msgs::SonarSensorMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8b8bd75b2e35757ULL;
  static const uint64_t static_value2 = 0x2ea0c9ee72ed58c1ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/SonarSensorMsg";
  }

  static const char* value(const ::stdr_msgs::SonarSensorMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Rfid sensor description\n\
float32 maxRange\n\
float32 minRange\n\
float32 coneAngle\n\
\n\
float32 frequency\n\
stdr_msgs/Noise noise\n\
\n\
string frame_id\n\
geometry_msgs/Pose2D pose # sensor pose, relative to robot center\n\
\n\
================================================================================\n\
MSG: stdr_msgs/Noise\n\
bool noise\n\
float32 noiseMean\n\
float32 noiseStd\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# Deprecated\n\
# Please use the full 3D pose.\n\
\n\
# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n\
\n\
# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n\
\n\
\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::stdr_msgs::SonarSensorMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.maxRange);
      stream.next(m.minRange);
      stream.next(m.coneAngle);
      stream.next(m.frequency);
      stream.next(m.noise);
      stream.next(m.frame_id);
      stream.next(m.pose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SonarSensorMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::SonarSensorMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::SonarSensorMsg_<ContainerAllocator>& v)
  {
    s << indent << "maxRange: ";
    Printer<float>::stream(s, indent + "  ", v.maxRange);
    s << indent << "minRange: ";
    Printer<float>::stream(s, indent + "  ", v.minRange);
    s << indent << "coneAngle: ";
    Printer<float>::stream(s, indent + "  ", v.coneAngle);
    s << indent << "frequency: ";
    Printer<float>::stream(s, indent + "  ", v.frequency);
    s << indent << "noise: ";
    s << std::endl;
    Printer< ::stdr_msgs::Noise_<ContainerAllocator> >::stream(s, indent + "  ", v.noise);
    s << indent << "frame_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.frame_id);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_SONARSENSORMSG_H