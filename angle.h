#pragma once

class Angle
{
    int value;
    static int normalize(int val);
public:
    explicit Angle(int val);

    static int sin(Angle angle);
    static int cos(Angle angle);

};

const auto POSITIVE_90 = Angle{1};
const auto NEGATIVE_90 = Angle{-1};
