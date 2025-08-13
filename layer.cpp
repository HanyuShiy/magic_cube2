//
// Created by Hanyu Shi on 13.08.25.
//

#include "layer.h"

Layer::Layer(const std::function<bool(const ColoredCubelet& cubelet)>& contains, const Orientation& axis)
    : contains(contains), axis(axis)
{
}

Orientation Layer::get_axis() const
{
    return this->axis;
}

