//
// Created by Hanyu Shi on 07.08.25.
//

#ifndef MAGIC_CUBE2_LAYER_H
#define MAGIC_CUBE2_LAYER_H
#include <functional>

#include "cubelet.h"
#include "orientation.h"


class Layer
{
public:
    std::function<bool(Cubelet cubelet)> contains;

    Layer(const std::function<bool(Cubelet cubelet)>& contains, Orientation axisVec);

private:
    const Orientation axisVec;
};


#endif //MAGIC_CUBE2_LAYER_H
