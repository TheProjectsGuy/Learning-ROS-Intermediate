#include <ros/ros.h>

int main(int argc, char **argv) {
    // Initialize
    ros::init(argc, argv, "CPP_h2_ns2_node");
    // Node handler
    ros::NodeHandle node_handler;
    // Get values of parameter "/header2/ns2" 
    const std::string param_name = "/header2/ns2";
    std::vector<std::string> param_vals;
    // If the parameter is there, then get the values
    if (!node_handler.hasParam(param_name)) {
        ROS_ERROR_STREAM("Parameter " << param_name << " does not exist");
    } else {
        node_handler.getParam(param_name, param_vals);
        ROS_INFO_STREAM("Received the parameter " << param_name 
                        << " len = " << param_vals.size());
        for (int i = 0; i < param_vals.size(); i++) {
            ROS_INFO_STREAM("Value " << i << " = " << param_vals[i]);
        }
    }
    return 0;
}
