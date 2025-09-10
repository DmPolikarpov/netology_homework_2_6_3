#include <iostream>

#include "triangle.h"

Triangle::Triangle(int setSide1, int setSide2, int setSide3, int setAngle1, int setAngle2, int setAngle3) : side1{ setSide1 }, side2{ setSide2 }, side3{ setSide3 }, angle1{ setAngle1 }, angle2{ setAngle2 }, angle3{ setAngle3 }
{
};
void Triangle::printSides()
{
    std::cout << "Стороны: a = " << side1 << " b = " << side2 << " c = " << side3 << std::endl;
};
void Triangle::printAngles()
{
    std::cout << "Углы: A = " << angle1 << " B = " << angle2 << " C = " << angle3 << std::endl;
};