//
// Created by Hanyu Shi on 07.08.25.
//

#include "surface.h"

#include <iostream>


Surface::Surface(const std::array<std::array<Color, 3>, 3>& colors) : colors(colors)
{
}

void Surface::print() const
{
    for (auto& line : colors)
    {
        for (auto& color : line)
        {
            std::cout << static_cast<char>(color) << " ";
        }
        std::cout << std::endl;
    }
}
