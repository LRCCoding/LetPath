#include "LetPath/Robot.h"
#include "LetPath/Pose.h"
#include "LetPath/Point.h"

namespace LetPath{

Robot::Robot() : WHEEL_SIZE(0), TRACK_WIDTH(0) {}
Robot::Robot(double wheelSize, double trackWidth) : WHEEL_SIZE(wheelSize), TRACK_WIDTH(trackWidth) {}

void moveToPoint(double x, double y, double theta){
    Point target(x, y);
    
}

void moveToPosition(double x, double y, double theta){
    Pose target(x, y, theta);
}

void moveToPosition(){
}