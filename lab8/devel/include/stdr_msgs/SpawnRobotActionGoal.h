// Generated by gencpp from file stdr_msgs/SpawnRobotActionGoal.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_SPAWNROBOTACTIONGOAL_H
#define STDR_MSGS_MESSAGE_SPAWNROBOTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <stdr_msgs/SpawnRobotGoal.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct SpawnRobotActionGoal_
{
  typedef SpawnRobotActionGoal_<ContainerAllocator> Type;

  SpawnRobotActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  SpawnRobotActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::stdr_msgs::SpawnRobotGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct SpawnRobotActionGoal_

typedef ::stdr_msgs::SpawnRobotActionGoal_<std::allocator<void> > SpawnRobotActionGoal;

typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionGoal > SpawnRobotActionGoalPtr;
typedef boost::shared_ptr< ::stdr_msgs::SpawnRobotActionGoal const> SpawnRobotActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/sahilsaxena/ros_workspaces/lab8/src/stdr_simulator/stdr_msgs/msg', '/home/sahilsaxena/ros_workspaces/lab8/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a4114e2999fb6554dc798d33047e1922";
  }

  static const char* value(const ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa4114e2999fb6554ULL;
  static const uint64_t static_value2 = 0xdc798d33047e1922ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/SpawnRobotActionGoal";
  }

  static const char* value(const ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
SpawnRobotGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: stdr_msgs/SpawnRobotGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
stdr_msgs/RobotMsg description\n\
\n\
================================================================================\n\
MSG: stdr_msgs/RobotMsg\n\
geometry_msgs/Pose2D initialPose\n\
\n\
stdr_msgs/FootprintMsg footprint\n\
\n\
stdr_msgs/LaserSensorMsg[] laserSensors\n\
stdr_msgs/SonarSensorMsg[] sonarSensors\n\
stdr_msgs/RfidSensorMsg[] rfidSensors\n\
stdr_msgs/CO2SensorMsg[] co2Sensors\n\
stdr_msgs/SoundSensorMsg[] soundSensors\n\
stdr_msgs/ThermalSensorMsg[] thermalSensors\n\
\n\
stdr_msgs/KinematicMsg kinematicModel\n\
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
\n\
================================================================================\n\
MSG: stdr_msgs/FootprintMsg\n\
geometry_msgs/Point[] points\n\
float32 radius # for circular footprints\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: stdr_msgs/LaserSensorMsg\n\
# Laser Sensor description\n\
float32 maxAngle\n\
float32 minAngle\n\
float32 maxRange\n\
float32 minRange\n\
int32 numRays\n\
\n\
stdr_msgs/Noise noise\n\
\n\
float32 frequency\n\
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
MSG: stdr_msgs/SonarSensorMsg\n\
# Rfid sensor description\n\
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
MSG: stdr_msgs/RfidSensorMsg\n\
# Rfid sensor description\n\
float32 maxRange\n\
float32 angleSpan\n\
float32 signalCutoff\n\
\n\
float32 frequency\n\
\n\
string frame_id\n\
geometry_msgs/Pose2D pose # sensor pose, relative to robot center\n\
\n\
================================================================================\n\
MSG: stdr_msgs/CO2SensorMsg\n\
# Sensor description\n\
\n\
float32 maxRange\n\
float32 frequency\n\
string frame_id\n\
\n\
# sensor pose, relative to robot center\n\
geometry_msgs/Pose2D pose \n\
\n\
================================================================================\n\
MSG: stdr_msgs/SoundSensorMsg\n\
# Sensor description\n\
\n\
float32 maxRange\n\
float32 frequency\n\
float32 angleSpan\n\
string frame_id\n\
\n\
# sensor pose, relative to robot center\n\
geometry_msgs/Pose2D pose \n\
\n\
================================================================================\n\
MSG: stdr_msgs/ThermalSensorMsg\n\
# Sensor description\n\
\n\
float32 maxRange\n\
float32 frequency\n\
float32 angleSpan\n\
string frame_id\n\
\n\
# sensor pose, relative to robot center\n\
geometry_msgs/Pose2D pose \n\
\n\
================================================================================\n\
MSG: stdr_msgs/KinematicMsg\n\
# Container for the kinematic model parameters. The parameters selected/\n\
# are quite general. For a more accurate motion model a per-kinematic model\n\
# approach should be followed.\n\
# Parameters are in the form a_C_D, where C is affected by D.\n\
# ux is the linear speed\n\
# uy is the lateral speed (for omni vehicles)\n\
# w is the angular speed\n\
# g is a cofficient that directly affects the angular speed\n\
# For more information check the MotionController::sampleVelocities function.\n\
\n\
string type\n\
float32 a_ux_ux\n\
float32 a_ux_uy\n\
float32 a_ux_w\n\
float32 a_uy_ux\n\
float32 a_uy_uy\n\
float32 a_uy_w\n\
float32 a_w_ux\n\
float32 a_w_uy\n\
float32 a_w_w\n\
float32 a_g_ux\n\
float32 a_g_uy\n\
float32 a_g_w\n\
";
  }

  static const char* value(const ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SpawnRobotActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::SpawnRobotActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::stdr_msgs::SpawnRobotGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_SPAWNROBOTACTIONGOAL_H
