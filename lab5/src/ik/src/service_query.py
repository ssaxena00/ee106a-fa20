#!/usr/bin/env python
import rospy
from moveit_msgs.srv import GetPositionIK, GetPositionIKRequest, GetPositionIKResponse
from geometry_msgs.msg import PoseStamped

#  0.25113468792841454, -0.33453669605931813, -2.075944809186843, 1.426133955236828, 1.2671436120520174, 2.094, -0.5585831807137558

def main():
    #Wait for the IK service to become available
    rospy.wait_for_service('compute_ik')
    rospy.init_node('service_query')
    
    #Create the function used to call the service
    compute_ik = rospy.ServiceProxy('compute_ik', GetPositionIK)
    
    while not rospy.is_shutdown():
        raw_input('Press enter to compute an IK solution:')
        
        #Construct the request
        request = GetPositionIKRequest()
        request.ik_request.group_name = "left_arm"
        request.ik_request.ik_link_name = "left_hand"
        request.ik_request.attempts = 100
        request.ik_request.pose_stamped.header.frame_id = "base"
        
        #YOUR CODE HERE
        #Write code to get the (x, y, z) coordinates of the end effector from the user
        #Hint: the function raw_input() might be use
        x = float(raw_input('Enter x value of end effector:'))
        y = float(raw_input('Enter y value of end effector:'))
        z = float(raw_input('Enter z value of end effector:'))
        
        #Set the desired orientation for the end effector HERE
        request.ik_request.pose_stamped.pose.position.x = x
        request.ik_request.pose_stamped.pose.position.y = y
        request.ik_request.pose_stamped.pose.position.z = z
        
        request.ik_request.pose_stamped.pose.orientation.x = 0.0
        request.ik_request.pose_stamped.pose.orientation.y = 1.0
        request.ik_request.pose_stamped.pose.orientation.z = 0.0
        request.ik_request.pose_stamped.pose.orientation.w = 0.0
        
        try:
            #Send the request to the service
            response = compute_ik(request)
            
            #Print the response HERE
            print(response)
            
        except rospy.ServiceException:
            print("Service call failed: %s")

#Python's syntax for a main() method
if __name__ == '__main__':
    main()

