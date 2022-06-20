#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "microaccel";

// For Block microaccel/MicroAccel/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_microaccel_std_msgs_Float64MultiArray> Sub_microaccel_599;

// For Block microaccel/MicroAccel/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Sub_microaccel_576;

// For Block microaccel/MicroAccel/Subscribe4
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_microaccel_geometry_msgs_Twist> Sub_microaccel_624;

// For Block microaccel/MicroAccel/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Sub_microaccel_562;

// For Block microaccel/MicroAccel/Subscribe8
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_microaccel_geometry_msgs_Twist> Sub_microaccel_559;

// For Block microaccel/MicroAccel/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_microaccel_geometry_msgs_Twist> Pub_microaccel_592;

// For Block microaccel/MicroAccel/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_609;

// For Block microaccel/MicroAccel/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_610;

// For Block microaccel/MicroAccel/Publish4
SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_611;

// For Block microaccel/MicroAccel/Publish5
SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_612;

// For Block microaccel/MicroAccel/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_microaccel_585;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

