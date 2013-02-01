<<<<<<< HEAD
/* Auto-generated by genmsg_cpp for file /home/emily/fuerte_workspace/sandbox/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg */
=======
/* Auto-generated by genmsg_cpp for file /home/dmillard/fuerte_workspace/sandbox/tum_simulator/cvg_sim_msgs/msg/YawrateCommand.msg */
>>>>>>> 9e0df80066a8de231801aa59886e14f01ad56fe6
#ifndef CVG_SIM_MSGS_MESSAGE_YAWRATECOMMAND_H
#define CVG_SIM_MSGS_MESSAGE_YAWRATECOMMAND_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace cvg_sim_msgs
{
template <class ContainerAllocator>
struct YawrateCommand_ {
  typedef YawrateCommand_<ContainerAllocator> Type;

  YawrateCommand_()
  : header()
  , turnrate(0.0)
  {
  }

  YawrateCommand_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , turnrate(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _turnrate_type;
  float turnrate;


  typedef boost::shared_ptr< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct YawrateCommand
typedef  ::cvg_sim_msgs::YawrateCommand_<std::allocator<void> > YawrateCommand;

typedef boost::shared_ptr< ::cvg_sim_msgs::YawrateCommand> YawrateCommandPtr;
typedef boost::shared_ptr< ::cvg_sim_msgs::YawrateCommand const> YawrateCommandConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace cvg_sim_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d8d2a0a1e3daa0fc410bf30a154fa6b6";
  }

  static const char* value(const  ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd8d2a0a1e3daa0fcULL;
  static const uint64_t static_value2 = 0x410bf30a154fa6b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cvg_sim_msgs/YawrateCommand";
  }

  static const char* value(const  ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32 turnrate\n\
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
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.turnrate);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct YawrateCommand_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::cvg_sim_msgs::YawrateCommand_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "turnrate: ";
    Printer<float>::stream(s, indent + "  ", v.turnrate);
  }
};


} // namespace message_operations
} // namespace ros

#endif // CVG_SIM_MSGS_MESSAGE_YAWRATECOMMAND_H
