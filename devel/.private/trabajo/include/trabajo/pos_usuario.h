// Generated by gencpp from file trabajo/pos_usuario.msg
// DO NOT EDIT!


#ifndef TRABAJO_MESSAGE_POS_USUARIO_H
#define TRABAJO_MESSAGE_POS_USUARIO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace trabajo
{
template <class ContainerAllocator>
struct pos_usuario_
{
  typedef pos_usuario_<ContainerAllocator> Type;

  pos_usuario_()
    : x(0)
    , y(0)
    , z(0)  {
    }
  pos_usuario_(const ContainerAllocator& _alloc)
    : x(0)
    , y(0)
    , z(0)  {
  (void)_alloc;
    }



   typedef int16_t _x_type;
  _x_type x;

   typedef int16_t _y_type;
  _y_type y;

   typedef int16_t _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::trabajo::pos_usuario_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::trabajo::pos_usuario_<ContainerAllocator> const> ConstPtr;

}; // struct pos_usuario_

typedef ::trabajo::pos_usuario_<std::allocator<void> > pos_usuario;

typedef boost::shared_ptr< ::trabajo::pos_usuario > pos_usuarioPtr;
typedef boost::shared_ptr< ::trabajo::pos_usuario const> pos_usuarioConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::trabajo::pos_usuario_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::trabajo::pos_usuario_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace trabajo

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'trabajo': ['/home/kevin/catkin_ws/src/trabajo/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::trabajo::pos_usuario_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::trabajo::pos_usuario_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trabajo::pos_usuario_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::trabajo::pos_usuario_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trabajo::pos_usuario_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::trabajo::pos_usuario_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::trabajo::pos_usuario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85729383565f7e059d4a213b3db1317b";
  }

  static const char* value(const ::trabajo::pos_usuario_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85729383565f7e05ULL;
  static const uint64_t static_value2 = 0x9d4a213b3db1317bULL;
};

template<class ContainerAllocator>
struct DataType< ::trabajo::pos_usuario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "trabajo/pos_usuario";
  }

  static const char* value(const ::trabajo::pos_usuario_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::trabajo::pos_usuario_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 x\n\
int16 y\n\
int16 z\n\
";
  }

  static const char* value(const ::trabajo::pos_usuario_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::trabajo::pos_usuario_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pos_usuario_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::trabajo::pos_usuario_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::trabajo::pos_usuario_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<int16_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int16_t>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<int16_t>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TRABAJO_MESSAGE_POS_USUARIO_H