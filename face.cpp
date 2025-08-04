#include "face.h"

#include <iostream>

Face::Face(const std::array<std::array<Color, 3>, 3>& colors) : colors(colors)
{
}

void Face::print() const
{
    for (auto& row : colors)
    {
        for (auto& color : row)      // row&col not really horizontal/vertical?
        {
            std::cout << static_cast<char>(color) << " ";
        }
        std::cout << std::endl;
    }
}
