#pragma once
#include <cmath>

class Pose{
public:
    //Constructor
    Pose(double y, double x, double heading) : x(x), y(y), theta(heading) {}

    //Getters
    double getX() const {return x;}
    double getY() const {return y;}

    //Functions
    double getDistance(Pose a, Pose b) const {
        return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getX(), 2));
    }

    double getHeadingRadians(Pose a, Pose b) const {
        return atan(b.getY() - a.getY() / b.getX() - a.getX());
    }

    double getHeadingDagrees(Pose a, Pose b) const {
        return atan(b.getY() - a.getY() / b.getX() - a.getX()) * (180 / M_PI);
    }
    
private:
    double x = 0;
    double y = 0;
    double theta = 0;
};