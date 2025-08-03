#include "angle.h"

int Angle::normalize(const int value)
{
    return value < 0 ? value % 4 + 4 : value % 4;
}

Angle::Angle(const int value): value(normalize(value))
{
}

int Angle::sin(const Angle angle)
{
    switch (angle.value)
    {
    case 0: return 0;
    case 1: return 1;
    case 2: return 0;
    case 3: return -1;
    default: throw;
    }
}

int Angle::cos(const Angle angle)
{
    switch (angle.value)
    {
    case 0: return 1;
    case 1: return 0;
    case 2: return -1;
    case 3: return 0;
    default: throw;
    }
}
