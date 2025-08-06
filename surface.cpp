//
// Created by Hanyu Shi on 07.08.25.
//

#include "face.h"

#include <iostream>


void Surface::print()
{
    for (auto& line : colors)
    {
        for (auto& color : line)
            std::cout << static_cast<char>(color) << " ";
    }
    std::cout << std::endl;
}
