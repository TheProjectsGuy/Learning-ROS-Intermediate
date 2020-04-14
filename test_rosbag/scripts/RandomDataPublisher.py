#!/usr/bin/env python
import rospy
from test_rosbag.msg import Int16Stamped
from std_msgs.msg import Int16
import random

def main():
    # Initialize node
    rospy.init_node("PY_RandomNumberGenerator")
    # Create publisher
    rnumber_publisher = rospy.Publisher("rnumber", Int16Stamped, queue_size=50)
    # Rate of publishing
    rate_controller = rospy.Rate(2)
    i = 0   # Sequence
    while(not rospy.is_shutdown()):
        # Create message
        i = i+1
        msg = Int16Stamped()
        # Assign data
        msg.data = random.randint(-32767, 32768)
        msg.header.seq = i
        msg.header.stamp = rospy.Time.now()
        msg.header.frame_id = "/map"
        # Publish message
        rnumber_publisher.publish(msg)
        rospy.loginfo("Value = %d", msg.data)
        # Delay
        rate_controller.sleep()


if __name__ == "__main__":
    try:
        main()
    except KeyboardInterrupt:
        print("Keyboard interrupt detected")
