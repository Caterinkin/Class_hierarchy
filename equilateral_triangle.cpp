#include "equilateral_triangle.h"

// класс равностороннего треугольника, наследуется от Triangle

EquilateralTriangle::EquilateralTriangle(int a): Triangle(a, a, a, 60, 60, 60) 
{
    name = "\nРавносторонний треугольник";
}