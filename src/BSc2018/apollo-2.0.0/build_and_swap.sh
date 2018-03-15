#!/usr/bin/env bash

# This scripts launches the apollo docker with the default image
# then bulids apollo, launches the modified image and then builds our ROS module

docker/scripts/dev_start.sh

echo "Running apollo.sh build. THIS MAY TAKE A VERY LONG TIME"
xhost +local:root 1>/dev/null 2>&1
docker exec -u $USER -it apollo_dev /apollo/apollo.sh build
xhost -local:root 1>/dev/null 2>&1

docker stop apollo_dev

docker/scripts/dev_start.sh -image local_dev

docker/scripts/dev_into.sh
