#pragma once

namespace LetPath{

class Robot{
    public:
        //Constructors
        Robot(double WHEEL_SIZE, double TRACK_WIDTH);
        Robot();
    private:
        double WHEEL_SIZE = 0;
        double TRACK_WIDTH = 0;
};
}