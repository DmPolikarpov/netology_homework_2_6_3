#ifndef QUADRANGLE_H
#define QUADRANGLE_H

#include "shape.h"

class Quadrangle : public Shape
{
private:
    int side1{};
    int side2{};
    int side3{};
    int side4{};
    int angle1{};
    int angle2{};
    int angle3{};
    int angle4{};

public:
    Quadrangle(int setSide1, int setSide2, int setSide3, int setSide4, int setAngle1, int setAngle2, int setAngle3, int setAngle4);
    void printSides() override;
    void printAngles() override;
};

#endif
