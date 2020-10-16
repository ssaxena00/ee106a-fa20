#!/usr/bin/env python

#Import the dependencies as described in example_pub.py
import rospy
from lab3 import lab3

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

    # ['left_s0', 'left_s1', 'left_e0', 'left_e1', 'left_w0', 'left_w1', 'left_w2']
    angles = raw_input('Enter a list of 7 joint angles: \n').split(', ')
    corrected_positions = [float(s) for s in angles]
    trial = [ 0.25113468792841454, -0.33453669605931813, -2.075944809186843, 1.426133955236828, 1.2671436120520174, 2.094, -0.5585831807137558]

    matrix = lab3(corrected_positions)
    print(str(matrix))

    #Wait for messages to arrive on the subscribed topics, and exit the node
    #when it is killed with Ctrl+C
    rospy.spin()


#Python's syntax for a main() method
if __name__ == '__main__':
    listener()