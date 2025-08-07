//
// Created by Hanyu Shi on 07.08.25.
//

#include "layer.h"

Layer::Layer(const std::function<bool(const ColoredCubelet& cubelet)>& contains, const Orientation axisVec)
    :
    contains(contains), axisVec(axisVec)
{
}

Orientation Layer::get_axisVec() const
{
    return axisVec;
}
