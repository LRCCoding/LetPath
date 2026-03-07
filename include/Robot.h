#pragma once

class Robot{
    public:
        //Constructors
        Robot();
        Robot(double WHEEL_SIZE, double TRACK_WIDTH);
    private:
        double WHEEL_SIZE = 0;
        double TRACK_WIDTH = 0;
};