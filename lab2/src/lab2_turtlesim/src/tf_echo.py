#!/usr/bin/env python
import rospy
import sys
import geometry_msgs
import tf2_ros

if __name__ == '__main__':
	target = sys.argv[1]
	source = sys.argv[2]
	rospy.init_node('talker', anonymous=True)
	tfb = tf2_ros.Buffer()
	tfl = tf2_ros.TransformListener(tfb)
	r = rospy.Rate(1)

	while not rospy.is_shutdown():
		try:
			t = tfb.lookup_transform(target, source, rospy.Time())

			print("At time {0}.{1}:".format(t.header.stamp.secs, t.header.stamp.nsecs//1000000))
			print("Translation", t.transform.translation.x, t.transform.translation.y, t.transform.translation.z)
			print("Quaternion", -t.transform.rotation.x, -t.transform.rotation.y, -t.transform.rotation.z, -t.transform.rotation.w)
			r.sleep()
		except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException):
			print("Caught Exception")
			