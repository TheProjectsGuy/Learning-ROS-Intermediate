#include <ros/ros.h>
#include <test_rosbag/Int16Stamped.h>   // The custom made message
#include <stdio.h>  // For rand() function


int main(int argc, char **argv) {
    // Initialize the node
    ros::init(argc, argv, "CPP_RandomNumberGenerator");
    // Set up the node handler
    ros::NodeHandle node_handler;
    // Create publisher object
    ros::Publisher rnum_publisher = node_handler.advertise<test_rosbag::Int16Stamped>("rnumber", 10);
    // Create rate of publishing
    ros::Rate rate_handler(2); // 2 Hz
    // Sequence
    int i = 0;
    while(ros::ok()) {  // While ROS is working
        // Message to publish
        test_rosbag::Int16Stamped msg;
        msg.data = rand();  // Data
        msg.header.seq = ++i;   // Sequence (with increment)
        msg.header.stamp = ros::Time::now();    // Time
        msg.header.frame_id = "/map";   // Frame of the message
        // Publish the message
        rnum_publisher.publish(msg);
        ROS_INFO("Value: %d", msg.data);
        // Delay for adjusting to the rate
        rate_handler.sleep();
    }
}
