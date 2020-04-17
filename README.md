# Intermediate level ROS tutorials

This repository contains ROS packages for ROS intermediate level tutorials.

## Table of contents

- [Intermediate level ROS tutorials](#intermediate-level-ros-tutorials)
  - [Table of contents](#table-of-contents)
  - [Packages](#packages)
    - [test_rosbag](#testrosbag)

## Packages

The individual packages created for the tutorials.

### test_rosbag

This package is to demonstrate the working of **rosbag**. To build this package, follow the following steps:

1. Move this package into your workspace
2. Run `catkin_make` in the workspace (maybe use `--pkg` to build a specified package)

This completes the build and now we're ready to run the nodes in the package. Please refer to [this post][blog-post-test-rosbag] for further information.

[![Developer Shield](https://img.shields.io/badge/Developer-TheProjectsGuy-blue)][dev-link]

[dev-link]: https://github.com/TheProjectsGuy
[blog-post-test-rosbag]: https://sites.google.com/view/no-boredom/home/learning/ros/ros-intermediate/ros-rosbag
