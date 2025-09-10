#include <iostream>
#include <Windows.h>

#include "shape.h"

#include "triangle.h"
#include "rightTriangle.h"
#include "isoscelesTriangle.h"
#include "equilateralTriangle.h"

#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "quadrangle.h"
#include "rectangle.h"

// COMMON FUNCTIONS
void print_info(Shape* shape);


int main()
{
    setlocale(LC_ALL, "Russian");

    // TRIANGLES

    Triangle triangle{ 10, 20, 30, 40, 50, 60 };
    RightTriangle rightTriangle{ 10, 20, 30, 40, 50 };
    IsoscelesTriangle isoscelesTriangle{ 10, 20, 40, 50 };
    EquilateralTriangle equilateralTriangle{ 10 };

    // QUADRANGLES

    Quadrangle quadrangle{ 10, 20, 30, 40, 50, 60, 70, 80 };
    Rectangle1 rectangle{ 10, 20 };
    Square square{ 10 };
    Parallelogram parallelogram{ 10, 20, 50, 60 };
    Rhomb rhomb{ 20, 50, 60 };

    // TRIANGLES DATA

    std::cout << "Треугольник: " << std::endl;
    print_info(&triangle);
    std::cout << "Прямоугольный треугольник: " << std::endl;
    print_info(&rightTriangle);
    std::cout << "Равнобедренный треугольник: " << std::endl;
    print_info(&isoscelesTriangle);
    std::cout << "Равносторонний треугольник: " << std::endl;
    print_info(&equilateralTriangle);

    std::cout << std::endl;

    // QUADRANGLE DATA

    std::cout << "Четырёхугольник: " << std::endl;
    print_info(&quadrangle);
    std::cout << "Прямоугольник: " << std::endl;
    print_info(&rectangle);
    std::cout << "Квадрат: " << std::endl;
    print_info(&square);
    std::cout << "параллелограмм: " << std::endl;
    print_info(&parallelogram);
    std::cout << "Ромб: " << std::endl;
    print_info(&rhomb);


    return EXIT_SUCCESS;
}

void print_info(Shape* shape)
{
    shape->printSides();
    shape->printAngles();
};