#include "ros/ros.h"
#include "beginner_tutorials/TwoIntsSender.h"


int main(int argc, char **argv) {
  ros::init(argc, argv, "talker");
  ros::NodeHandle n;
  TwoIntsSender twoIntsSender(n);

  ros::Rate loop_rate(10);

  while (ros::ok())
  {
    twoIntsSender.send(10, 20);
    ros::spinOnce();

    loop_rate.sleep();
  }


  return 0;
}