#pragma once
#include <cmath>

namespace LetPath{

class Point{
public:
    //Constructor
    Point(double x, double y);
    Point();

    //Getters
    double getX() const {return x;}
    double getY() const {return y;}

    //Functions
    double getDistance(Point a, Point b) const;

    double getHeadingRadians(Point a, Point b) const;

    double getHeadingDegrees(Point a, Point b) const;

private:
    double x = 0;
    double y = 0;
};
}