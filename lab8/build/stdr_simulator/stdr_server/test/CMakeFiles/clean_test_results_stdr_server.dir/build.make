# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sahilsaxena/ros_workspaces/lab8/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sahilsaxena/ros_workspaces/lab8/build

# Utility rule file for clean_test_results_stdr_server.

# Include the progress variables for this target.
include stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/progress.make

stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server:
	cd /home/sahilsaxena/ros_workspaces/lab8/build/stdr_simulator/stdr_server/test && /usr/bin/python2 /opt/ros/kinetic/share/catkin/cmake/test/remove_test_results.py /home/sahilsaxena/ros_workspaces/lab8/build/test_results/stdr_server

clean_test_results_stdr_server: stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server
clean_test_results_stdr_server: stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/build.make

.PHONY : clean_test_results_stdr_server

# Rule to build all files generated by this target.
stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/build: clean_test_results_stdr_server

.PHONY : stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/build

stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/clean:
	cd /home/sahilsaxena/ros_workspaces/lab8/build/stdr_simulator/stdr_server/test && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_stdr_server.dir/cmake_clean.cmake
.PHONY : stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/clean

stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/depend:
	cd /home/sahilsaxena/ros_workspaces/lab8/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sahilsaxena/ros_workspaces/lab8/src /home/sahilsaxena/ros_workspaces/lab8/src/stdr_simulator/stdr_server/test /home/sahilsaxena/ros_workspaces/lab8/build /home/sahilsaxena/ros_workspaces/lab8/build/stdr_simulator/stdr_server/test /home/sahilsaxena/ros_workspaces/lab8/build/stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stdr_simulator/stdr_server/test/CMakeFiles/clean_test_results_stdr_server.dir/depend

