#include "LetPath/Point.h"

namespace LetPath{

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}

double Point::getDistance(Point a, Point b) const {
    return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2));
}

double Point::getHeadingRadians(Point a, Point b) const {
    return atan((b.getY() - a.getY()) / (b.getX() - a.getX()));
}

double Point::getHeadingDegrees(Point a, Point b) const {
    return atan((b.getY() - a.getY()) / (b.getX() - a.getX())) * (180 / M_PI);
}
}