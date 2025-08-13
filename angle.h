#ifndef MAGIC_CUBE2_ANGLE_H
#define MAGIC_CUBE2_ANGLE_H

class Angle
{
    int value;
    static int normalize(int val);
public:
    explicit Angle(int val);
    static int sin(Angle angle);
    static int cos(Angle angle);
};

const auto CLOCKWISE_90 = Angle(1);
const auto COUNTERCLOCKWISE_90 = Angle(-1);
const auto HALF_ROUND = Angle(2);

#endif
