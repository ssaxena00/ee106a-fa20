#!/usr/bin/env python
"""
Path Planning Script for Lab 5
Author: Tiffany Cappellari
"""
import sys

from baxter_interface import Limb, gripper as robot_gripper

import rospy
import numpy as np
import traceback

from moveit_msgs.msg import OrientationConstraint
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Header

from path_planner import PathPlanner
# Uncomment this line for part 5 of Lab 5
# from controller import Controller


def main():
    """
    Main Script
    """

    # Make sure that you've looked at and understand path_planner.py before starting
    planner = PathPlanner("right_arm")

	# K values for Part 5
    Kp = 0.1 * np.array([0.3, 2, 1, 1.5, 2, 2, 3]) # Borrowed from 106B Students
    Kd = 0.01 * np.array([2, 1, 2, 0.5, 0.5, 0.5, 0.5]) # Borrowed from 106B Students
    Ki = 0.01 * np.array([1, 1, 1, 1, 1, 1, 1]) # Untuned
    Kw = np.array([0.9, 0.9, 0.9, 0.9, 0.9, 0.9, 0.9]) # Untuned

	# Initialize the controller for Part 5
	# controller = Controller( . . . )

    #-----------------------------------------------------#
    ## Add any obstacles to the planning scene here
    box = PoseStamped()
    box.header.frame_id = "table"
    # box.header.stamp.secs = 10.0
    box.pose.position.x = 0.75
    box.pose.position.y = 0.0
    box.pose.position.z = -0.92
    box.pose.orientation.x = 0.0
    box.pose.orientation.y = 0.0
    box.pose.orientation.z = 0.0
    box.pose.orientation.w = 1.0
    planner.add_box_obstacle(np.array([0.913, 0.913, 0.04]), "table", box)
    print('PoseStamped table:', box)

    #-----------------------------------------------------#

    #Create a path constraint for the arm
    #UNCOMMENT FOR THE ORIENTATION CONSTRAINTS PART
    orien_const = OrientationConstraint()
    orien_const.link_name = "right_gripper";
    orien_const.header.frame_id = "base";
    orien_const.orientation.y = -1.0;
    orien_const.absolute_x_axis_tolerance = 0.1;
    orien_const.absolute_y_axis_tolerance = 0.1;
    orien_const.absolute_z_axis_tolerance = 0.1;
    orien_const.weight = 1.0;

    def move_to_goal(x, y, z, orien_const=[], or_x=0.0, or_y=-1.0, or_z=0.0, or_w=0.0):
        while not rospy.is_shutdown():
            try:
                goal = PoseStamped()
                goal.header.frame_id = "base"

                #x, y, and z position
                goal.pose.position.x = x
                goal.pose.position.y = y
                goal.pose.position.z = z

    	        #Orientation as a quaternion
                goal.pose.orientation.x = or_x
                goal.pose.orientation.y = or_y
                goal.pose.orientation.z = or_z
                goal.pose.orientation.w = or_w

                plan = planner.plan_to_pose(goal, orien_const)

                raw_input("Press <Enter> to move the right arm to goal pose: ")

                # Might have to edit this for part 5
                if not planner.execute_plan(plan):
                    raise Exception("Execution failed")
            except Exception as e:
                print e
                traceback.print_exc()
            else:
                break

    right_gripper = robot_gripper.Gripper('right')

    while not rospy.is_shutdown():
        # Set your goal positions here
        # right_gripper.calibrate()
        # rospy.sleep(2.0)
        
        print('first close..')
    	right_gripper.close()
        rospy.sleep(0.1)

        print('first open..')
        right_gripper.open()
        rospy.sleep(0.1)
        
        print('second open..')
        right_gripper.open()
        rospy.sleep(0.1)

        print('moving to 1st goal and open..')
        move_to_goal(0.4225, -0.1265, 0.05)
        right_gripper.open()
        rospy.sleep(0.1)

        print('moving to 2nd goal with constraint and close..')
        move_to_goal(0.4225, -0.0565, -0.14, [orien_const])
        right_gripper.close()
        rospy.sleep(0.1)

        print('moving to 3rd goal..')
        move_to_goal(0.41, -0.11, 0.5)
        rospy.sleep(0.1)

        print('moving to 3rd goal and open..')
        move_to_goal(0.6, -0.3, -0.15)
        right_gripper.open()
        rospy.sleep(0.1)


if __name__ == '__main__':
    rospy.init_node('moveit_node')
    main()
