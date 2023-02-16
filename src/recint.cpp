#include "ros/ros.h"
#include "beginner_tutorials/TwoIntsRecipient.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  TwoIntsRecipient twoIntsRecipient(n);

  ros::spin();

  return 0;
}