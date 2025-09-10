#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

class Triangle : public Shape
{
private:
    int side1{};
    int side2{};
    int side3{};
    int angle1{};
    int angle2{};
    int angle3{};

public:
    Triangle(int setSide1, int setSide2, int setSide3, int setAngle1, int setAngle2, int setAngle3);
    void printSides() override;
    void printAngles() override;
};

#endif