#include "ros/ros.h"
#include "kinova_msgs/KinovaPose.h"
#include <iostream>
#include <string>


void display_position(kinova_msgs::KinovaPose position){
    cout<<"COORDS-> x:"<< position.X<<" y: "<<position.Y <<" z: "<< position.Z <<"\n";
}


int main(int argc, char* argv[]){
    double x=0;
    double y=0;
    double z=0;

    ros::init(argc, argv, "testing");
    ros::NodeHandle nh("~");
    

    ros::Subscriber sub = nh.subscribe("/j2n6s300_driver/out/cartesian_command", 1000, display_position); //creating new subscriber to display coord info



    return 0;
}