execute_process(COMMAND "/home/sahilsaxena/ros_workspaces/lab6/build/ros_numpy/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/sahilsaxena/ros_workspaces/lab6/build/ros_numpy/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
