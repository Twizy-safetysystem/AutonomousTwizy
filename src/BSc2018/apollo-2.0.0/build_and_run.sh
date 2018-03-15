#!/usr/bin/env bash

# This scripts launches the apollo docker with the default image
# then bulids apollo, launches the modified image and then builds our ROS module

echo "Starting stock apollo container"
docker/scripts/dev_start.sh >/dev/null 2>&1

echo "Running apollo.sh build. THIS MAY TAKE A VERY LONG TIME"
xhost +local:root 1>/dev/null 2>&1
docker exec -u $USER -it apollo_dev /apollo/apollo.sh build >/dev/null
xhost -local:root 1>/dev/null 2>&1

echo "Stopping stock apollo container"
docker stop apollo_dev >/dev/null 2>&1

echo "Starting modified container"
docker/scripts/dev_start.sh -image local_dev >/dev/null 2>&1

xhost +local:root 1>/dev/null 2>&1
echo "Running bootstrap.sh"
docker exec -u $USER -it apollo_dev /bin/bash -c '/apollo/scripts/bootstrap.sh'
docker exec -u $USER -it apollo_dev /bin/bash -c 'cd /apollo/ros/ \
    && source /opt/ros/indigo/setup.bash \
    && catkin_make \
    && source devel/setup.bash \
    && rosrun package rosTest'
xhost -local:root 1>/dev/null 2>&1

echo "Spawning interactive shell"
docker/scripts/dev_into.sh

echo "Stopping apollo docker"
docker stop apollo_dev >/dev/null 2>&1
