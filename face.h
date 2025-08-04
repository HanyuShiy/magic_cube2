#include <array>

#include "color.h"

class Face
{
    std::array<std::array<Color, 3>, 3> colors;

public:
    Face(const std::array<std::array<Color, 3>, 3>& colors);
    void print() const;
};
