#ifndef TWO_INTS_RECIPIENT_H
#define TWO_INTS_RECIPIENT_H

#include "beginner_tutorials/TwoInts.h"
#include <ros/ros.h>

class TwoIntsRecipient {
protected:
  ros::Subscriber _sub;
  
public:
  TwoIntsRecipient(ros::NodeHandle &n);
  ~TwoIntsRecipient();

  void callback(const beginner_tutorials::TwoInts::ConstPtr& msg);
};

#endif