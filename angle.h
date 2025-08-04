#pragma once

class Angle
{
    int value;
    static int normalize(int value);

public:
    explicit Angle(int value);

    static int sin(Angle angle);
    static int cos(Angle angle);
};

const Angle ZERO_ANGLE(0); // 0 degree
const Angle ONE_STEP_CLOCKWISE(1);   // 2/pi
const Angle ONE_STEP_COUNTERCLOCKWISE(-1); // -2/pi
const Angle HALF_ROUND(2); // pi
