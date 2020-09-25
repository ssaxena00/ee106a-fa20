#!/usr/bin/env python

#Import the dependencies as described in example_pub.py
import rospy
import kin_func_skeleton as kfs
from lab3 import lab3
from sensor_msgs.msg import JointState

#Define the callback method which is called whenever this node receives a 
#message on its subscribed topic. The received message is passed as the 
#first argument to callback().
def callback(message):
    #Print the contents of the message to the console
    positions = message.position
    names = message.name
    corrected_positions = [
        positions[names.index('left_s0')], 
        positions[names.index('left_s1')], 
        positions[names.index('left_e0')], 
        positions[names.index('left_e1')], 
        positions[names.index('left_w0')], 
        positions[names.index('left_w1')], 
        positions[names.index('left_w2')]
    ]
    matrix = lab3(corrected_positions)
    print(str(matrix))

#Define the method which contains the node's main functionality
def listener():

    #Run this program as a new node in the ROS computation graph
    #called /listener_<id>, where <id> is a randomly generated numeric
    #string. This randomly generated name means we can start multiple
    #copies of this node without having multiple nodes with the same
    #name, which ROS doesn't allow.
    rospy.init_node('listener', anonymous=True)

    #Create a new instance of the rospy.Subscriber object which we can 
    #use to receive messages of type std_msgs/String from the topic /chatter_talk.
    #Whenever a new message is received, the method callback() will be called
    #with the received message as its first argument.
    rospy.Subscriber("robot/joint_states", JointState, callback)


    #Wait for messages to arrive on the subscribed topics, and exit the node
    #when it is killed with Ctrl+C
    rospy.spin()


#Python's syntax for a main() method
if __name__ == '__main__':
    listener()