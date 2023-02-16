#ifndef TWO_INTS_SENDER_H
#define TWO_INTS_SENDER_H

#include "beginner_tutorials/TwoInts.h"
#include <ros/ros.h>

class TwoIntsSender {
protected:
  ros::Publisher _pub;
public:
  TwoIntsSender(ros::NodeHandle &n);
  ~TwoIntsSender();

  void send(int a, int b);
};

#endif