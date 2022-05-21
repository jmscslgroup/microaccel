#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block microaccel/MicroAccel/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_microaccel_std_msgs_Float64MultiArray> Sub_microaccel_599;

// For Block microaccel/MicroAccel/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_microaccel_geometry_msgs_Twist> Sub_microaccel_570;

// For Block microaccel/MicroAccel/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Sub_microaccel_576;

// For Block microaccel/MicroAccel/Subscribe6
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Sub_microaccel_562;

// For Block microaccel/MicroAccel/Subscribe8
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_microaccel_geometry_msgs_Twist> Sub_microaccel_559;

// For Block microaccel/MicroAccel/Publish1
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_microaccel_geometry_msgs_Twist> Pub_microaccel_592;

// For Block microaccel/MicroAccel/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_609;

// For Block microaccel/MicroAccel/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_610;

// For Block microaccel/MicroAccel/Publish4
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_611;

// For Block microaccel/MicroAccel/Publish5
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_microaccel_std_msgs_Float64> Pub_microaccel_612;

// For Block microaccel/MicroAccel/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_microaccel_585;

void slros_node_init(int argc, char** argv);

#endif
