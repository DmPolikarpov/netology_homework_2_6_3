#include <iostream>

#include "quadrangle.h"

Quadrangle::Quadrangle(int setSide1, int setSide2, int setSide3, int setSide4, int setAngle1, int setAngle2, int setAngle3, int setAngle4) :
    side1{ setSide1 }, side2{ setSide2 }, side3{ setSide3 }, side4{ setSide4 }, angle1{ setAngle1 }, angle2{ setAngle2 }, angle3{ setAngle3 }, angle4{ setAngle4 }
{
};
void Quadrangle::printSides()
{
    std::cout << "Стороны: a = " << side1 << " b = " << side2 << " c = " << side3 << " d = " << side4 << std::endl;
};
void Quadrangle::printAngles()
{
    std::cout << "Углы: A = " << angle1 << " B = " << angle2 << " C = " << angle3 << " D = " << angle4 << std::endl;
};