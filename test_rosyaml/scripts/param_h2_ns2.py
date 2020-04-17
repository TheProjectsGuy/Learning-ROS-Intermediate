#!/usr/bin/env python
import rospy

def main():
    # Initialize node
    rospy.init_node("PY_h2_ns2_node")
    # Get the parameter value
    param_name = "/header2/ns2"
    param_value = rospy.get_param(param_name)
    rospy.loginfo("Got {l} values for parameter {pn}".format(
        l = len(param_value),
        pn = param_name
    ))
    for i, v in enumerate(param_value):
        rospy.loginfo("Parameter {k} ({t}) = {l}".format(k = i, t=type(v), l = v))

if __name__ == "__main__":
    try:
        main()
    except Exception as exc:
        print("Exception occurred: ", exc)
