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
2. Move the script file `scripts/RandomDataPublisher.py` and the code file `src/RandomDataPublisher.cpp` to another location. This is done so that you can build the message first.
3. Modify the CMakeLists.txt file.
   - Comment out the line number `146` and line `162` (add_executable and target_link_libraries for the C++ to executable build)
   - This won't build the C++ code

4. Run `catkin_make` in the workspace (maybe use a specified package)
5. Move back the script files and the code files that we moved in step 3 to their original destinations
6. Uncomment the lines that we had commented in step 3
7. Run the command `catkin_make` in the workspace

This completes the build and now we're ready to run the nodes in the package. Please refer to [this post][blog-post-test-rosbag] for further information.

[![Developer Shield](https://img.shields.io/badge/Developer-TheProjectsGuy-blue)][dev-link]

[dev-link]: https://github.com/TheProjectsGuy
[blog-post-test-rosbag]: https://sites.google.com/view/no-boredom/home/learning/ros/ros-intermediate/ros-rosbag
