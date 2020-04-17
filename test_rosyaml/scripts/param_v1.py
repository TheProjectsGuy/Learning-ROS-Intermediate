#!/usr/bin/env python
import rospy

def main():
    # Initialize node
    rospy.init_node("PY_param_var1")
    # Get value for parameter "var1"
    val = rospy.get_param("var1")
    # Print value
    rospy.loginfo("Parameter [/{var}] = {value}".format(
        var = "var1",
        value = val
    ))

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print("Exception occurred: ", exc)
