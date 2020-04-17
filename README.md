# Intermediate level ROS tutorials

This repository contains ROS packages for ROS intermediate level tutorials.

## Table of contents

- [Intermediate level ROS tutorials](#intermediate-level-ros-tutorials)
  - [Table of contents](#table-of-contents)
  - [Packages](#packages)
    - [test_rosbag](#testrosbag)
    - [test_rosyaml](#testrosyaml)
  - [Building packages](#building-packages)

## Packages

The individual packages created for the tutorials.

### test_rosbag

This package is to demonstrate the working of **rosbag**. Please refer to [this post][blog-post-test-rosbag] for further information. 

The nodes in this package are as follows:

1. C++ Nodes:
    - [**rdata_pub**](./test_rosbag/src/RandomDataPublisher.cpp): Published random numbers along with header.
2. Python Nodes:
    - [**RandomDataPublisher.py**](./test_rosbag/scripts/RandomDataPublisher.py): Published random numbers along with header.

### test_rosyaml

This package is to demonstrate the working of **rosparam** and describe the workings of the ROS parameter server. This package also has the ROS Parameter Server APIs for C++ and Python demonstrated. Build the package and refer to [this post][blog-post-test-rosyaml] for further information.

The nodes in this package are as follows:

1. C++ Nodes:
    - [**single_param_val**](./test_rosyaml/src/ros_param_v1.cpp): Fetch the value of parameter named `var1`.
    - [**all_params**](./test_rosyaml/src/get_all_parameters.cpp): List the name and values of all parameters on the parameter server.
    - [**h2_ns2_param_val**](./test_rosyaml/src/ros_param_h2_ns2.cpp): Get the vector stored in parameter `/header2/ns2`. Note that the C++ API doesn't allow vectors which have elements of different datatypes.
2. Python Nodes:
    - [**param_v1.py**](./test_rosyaml/scripts/param_v1.py): Fetch the value of parameter named `var1`.
    - [**get_all_params.py**](./test_rosyaml/scripts/get_all_params.py): List the name and values of all parameters on the parameter server.
    - [**param_h2_ns2.py**](./test_rosyaml/scripts/param_h2_ns2.py): Get the vector stored in parameter `/header2/ns2`. Note that the Python API allows vectors which have elements of different datatypes, since the way Python handles datatypes is different.

The configuration files in this package are as follows:

1. [**param1.yaml**](./test_rosyaml/param_configs/param1.yaml): A file to demonstrate the structure of a YAML file.
2. [**param2.yaml**](./test_rosyaml/param_configs/param2.yaml): Same as param1, but the parameter `/header2/ns2` has a vector of strings, instead of a vector of elements of different data types.

## Building packages

To build a package, perform the following steps:

1. Clone this repository.
2. Move the desierd package (entire folder) into the `src` folder of your workspace.
3. Run `catkin_make` in your workspace folder. 

This will build the package. You may use the `--pkg PACKAGE_NAME` parameter in the call to `catkin_make` to build specific packages only. After the package is built, you'll be able to run the nodes in it.

> Note: The workspace must be active (it should appear in the ROS_PACKAGE_PATH environment variable).

[![Developer Shield](https://img.shields.io/badge/Developer-TheProjectsGuy-blue)][dev-link]

[dev-link]: https://github.com/TheProjectsGuy
[blog-post-test-rosbag]: https://sites.google.com/view/no-boredom/home/learning/ros/ros-intermediate/ros-rosbag
[blog-post-test-rosyaml]: https://sites.google.com/view/no-boredom/home/learning/ros/ros-intermediate/ros-parameter-server
