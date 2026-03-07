#pragma once
#include "Pose.h"

namespace LetPath{

class Robot{
    public:
        //Constructors
        Robot(double WHEEL_SIZE, double TRACK_WIDTH);
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