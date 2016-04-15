#ifndef WEBOTS_ROS_MESSAGE_NODE_GET_STATUS_H
#define WEBOTS_ROS_MESSAGE_NODE_GET_STATUS_H

#include "ros/service_traits.h"


#include "node_get_statusRequest.h"
#include "node_get_statusResponse.h"


namespace webots_ros
{

struct node_get_status
{

typedef node_get_statusRequest Request;
typedef node_get_statusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

};
} // namespace webots_ros


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::webots_ros::node_get_status > {
  static const char* value()
  {
    return "9d10c008835cf4bd024a6af9eca46c13";
  }

  static const char* value(const ::webots_ros::node_get_status&) { return value(); }
};

template<>
struct DataType< ::webots_ros::node_get_status > {
  static const char* value()
  {
    return "webots_ros/node_get_status";
  }

  static const char* value(const ::webots_ros::node_get_status&) { return value(); }
};


template<>
struct MD5Sum< ::webots_ros::node_get_statusRequest>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_status >::value();
  }
  static const char* value(const ::webots_ros::node_get_statusRequest&)
  {
    return value();
  }
};


template<>
struct DataType< ::webots_ros::node_get_statusRequest>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_status >::value();
  }
  static const char* value(const ::webots_ros::node_get_statusRequest&)
  {
    return value();
  }
};

template<>
struct MD5Sum< ::webots_ros::node_get_statusResponse>
{
  static const char* value()
  {
    return MD5Sum< ::webots_ros::node_get_status >::value();
  }
  static const char* value(const ::webots_ros::node_get_statusResponse&)
  {
    return value();
  }
};

template<>
struct DataType< ::webots_ros::node_get_statusResponse>
{
  static const char* value()
  {
    return DataType< ::webots_ros::node_get_status >::value();
  }
  static const char* value(const ::webots_ros::node_get_statusResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WEBOTS_ROS_MESSAGE_NODE_GET_STATUS_H