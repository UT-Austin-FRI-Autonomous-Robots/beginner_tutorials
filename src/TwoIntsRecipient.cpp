#include "beginner_tutorials/TwoIntsRecipient.h"


  TwoIntsRecipient::TwoIntsRecipient(ros::NodeHandle &n) : 
  _sub(n.subscribe("two_ints", 1000, &TwoIntsRecipient::callback, this))
  {

  }

  TwoIntsRecipient::~TwoIntsRecipient() {}

  void TwoIntsRecipient::callback(
    const beginner_tutorials::TwoInts::ConstPtr& msg) {
      ROS_INFO_STREAM(msg->a);
      ROS_INFO_STREAM(msg->b);
  }
