#include "right_triangle.h"

// класс прямоугольного треугольника, наследуется от Triangle

RightTriangle::RightTriangle(int a, int b, int c, int A, int B): Triangle(a, b, c, A, B, 90) 
{
    name = "\nПрямоугольный треугольник";
}