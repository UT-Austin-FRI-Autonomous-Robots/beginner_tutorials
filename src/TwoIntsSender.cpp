#include "beginner_tutorials/TwoIntsSender.h"

TwoIntsSender::TwoIntsSender(ros::NodeHandle &n) :
_pub(n.advertise<beginner_tutorials::TwoInts>("two_ints", 1000))
{

}

TwoIntsSender::~TwoIntsSender() {}

void TwoIntsSender::send(int a, int b) {
    beginner_tutorials::TwoInts msg;

    msg.a = a;
    msg.b = b;

    ROS_INFO_STREAM(msg.a);
    ROS_INFO_STREAM(msg.b);

    _pub.publish(msg);
}