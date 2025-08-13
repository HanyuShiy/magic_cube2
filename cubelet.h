//
// Created by Hanyu Shi on 13.08.25.
//

#ifndef MAGIC_CUBE2_CUBELET_H
#define MAGIC_CUBE2_CUBELET_H
#include "position.h"


class Cubelet
{
public:
    virtual ~Cubelet() = default;
    Position position;

    explicit Cubelet(Position position);

    virtual void rotateX(const Angle& angle);
    virtual void rotateY(const Angle& angle);
    virtual void rotateZ(const Angle& angle);
};


#endif //MAGIC_CUBE2_CUBELET_H
