#include "ros/ros.h"
#include "std_msgs/String.h"
#include "my_package/my_msg.h"
#include <sstream>

void chatterCallback(const my_package::my_msg msg)
{
  ROS_INFO("I heard: %d", msg.data);
}

int main(int argc, char **argv) {

    ros::init(argc, argv, "my_package_node_subscriber"); 
    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("my_package_topic", 1000, chatterCallback);

    ros::spin();

return 0;

}


