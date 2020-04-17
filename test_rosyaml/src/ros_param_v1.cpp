#include <ros/ros.h>

int main(int argc, char **argv)
{
    // Initialize node
    ros::init(argc, argv, "CPP_ROSPARAM");
    // Node Handler
    ros::NodeHandle node_handler;
    // Get the parameter "var1"
    std::string param_var1 = "Default [NONE]";
    const std::string pname = "var1";
    if (node_handler.hasParam(pname)) {
        node_handler.getParam(pname, param_var1);
    }
    ROS_INFO_STREAM("The value of parameter [var1] = " << param_var1);
    // End of program
    ros::shutdown();
    return 0;
}

