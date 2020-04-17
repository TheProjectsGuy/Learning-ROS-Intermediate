#!/usr/bin/env python
import rospy

def main():
    # Initialize the node
    rospy.init_node("PY_list_ROSPARAM")
    # Get the list of parameters
    param_names = rospy.get_param_names()
    # Print out the results
    rospy.loginfo("Found the {l} parameters".format(l = len(param_names)))
    for i, param in enumerate(param_names):
        param_value = rospy.get_param(param)
        rospy.loginfo("[\033[96;4m{pn}\033[0m] = {pv}".format(pn = param_names[i], pv=param_value))

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print("Exception occurred: ", exc)
