#!/usr/bin/env python
import rospy
import sys
from geometry_msgs.msg import Twist, Vector3

#Define the method which contains the main functionality of the node.
def talker(name):

  #Create an instance of the rospy.Publisher object which we can 
  #use to publish messages to a topic. This publisher publishes 
  #messages of type std_msgs/String to the topic
  pub = rospy.Publisher('%s/cmd_vel' % name, Twist, queue_size=10)

  # Create a timer object that will sleep long enough to result in
  # a 10Hz publishing rate
  r = rospy.Rate(10) # 10hz

  # Loop until the node is killed with Ctrl-C
  while not rospy.is_shutdown():
    user_input = raw_input('Enter WASD: ')

    # Construct a string that we want to publish
    # (In Python, the "%" operator functions similarly
    #  to sprintf in C or MATLAB)
	

    # Publish our msg to the 'user_messages' topic
    pub.publish(msg)
    
    # Use our rate object to sleep until it is time to publish again
    r.sleep()

if __name__ == '__main__':
  # Check if the node has received a signal to shut down
  # If not, run the talker method

  #Run this program as a new node in the ROS computation graph 
  #called /turtule_controller.
  rospy.init_node('turtle_controller', anonymous=True)

  name = sys.argv[3]

  try:
    talker(name)
  except rospy.ROSInterruptException: pass
