#include <ros/ros.h>

int main(int argc, char **argv) {
    // Initialize
    ros::init(argc, argv, "CPP_list_ROSPARAM");
    // Node handler
    ros::NodeHandle node_handler;
    // String vector to store parameters
    std::vector<std::string> parameter_list;
    // Get parameters currently running on the server
    node_handler.getParamNames(parameter_list);
    // Display them
    for (int i = 0; i < parameter_list.size(); i++) {
        std::string param_value;
        if (node_handler.getParam(parameter_list[i], param_value)) {
            ROS_INFO_STREAM("[\033[96;4m" << parameter_list[i] << "\033[0m] = " << param_value);
        }
    }
    ros::shutdown();
    return 0;
}
