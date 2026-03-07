#pragma once
#include "Pose.h"
#include "Drivetrain.h"

namespace LetPath{

class Robot{
    public:
        //Constructors
        Robot(double wheelSize, double trackWidth);
        Robot(Drivetrain drivetrain);

        //Custom Functions
        void setStartingPose(double x, double y, double theta){
            startingPose = Pose(x, y, theta);
        }

        Pose getStartingPose(){
            return startingPose;
        }

        Pose getCurrentPose(){
            return startingPose;
        }

        
    private:
        Pose startingPose;
        double WHEEL_SIZE;
        double TRACK_WIDTH;
};
}