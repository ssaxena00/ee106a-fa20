#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/sahilsaxena/ros_workspaces/lab6/src/ros_numpy"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sahilsaxena/ros_workspaces/lab6/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sahilsaxena/ros_workspaces/lab6/install/lib/python2.7/dist-packages:/home/sahilsaxena/ros_workspaces/lab6/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sahilsaxena/ros_workspaces/lab6/build" \
    "/usr/bin/python2" \
    "/home/sahilsaxena/ros_workspaces/lab6/src/ros_numpy/setup.py" \
    build --build-base "/home/sahilsaxena/ros_workspaces/lab6/build/ros_numpy" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/sahilsaxena/ros_workspaces/lab6/install" --install-scripts="/home/sahilsaxena/ros_workspaces/lab6/install/bin"
