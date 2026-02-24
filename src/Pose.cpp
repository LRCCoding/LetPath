#include "LetPath/Pose.h"

namespace LetPath{
    Pose::Pose(double y, double x, double heading) : x(x), y(y), theta(heading) {}

    //Functions
    double Pose::getDistance(Pose a, Pose b) const {
        return sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getX(), 2));
    }

    double Pose::getHeadingRadians(Pose a, Pose b) const {
        return atan(b.getY() - a.getY() / b.getX() - a.getX());
    }

    double Pose::getHeadingDagrees(Pose a, Pose b) const {
        return atan(b.getY() - a.getY() / b.getX() - a.getX()) * (180 / M_PI);
    }   
}