execute_process(COMMAND "/home/orng/catkin_ws/build/kinova-ros-melodic-devel/kinova_demo/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/orng/catkin_ws/build/kinova-ros-melodic-devel/kinova_demo/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
