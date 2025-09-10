#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
private:
    int sides{ 0 };

public:
    virtual void printSides();
    virtual void printAngles();
};

#endif
