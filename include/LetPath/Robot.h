#pragma once
#include "Pose.h"
#include "Drivetrain.h"

namespace LetPath{

class Robot{
    public:
        //Constructors
        Robot(double wheelSize, double trackWidth);
        Robot();

        //Custom Functions
        Pose getRobotPose(){
            return Pose(0, 0, 0);
        }

    private:
        double WHEEL_SIZE = 0;
        double TRACK_WIDTH = 0;
};
}