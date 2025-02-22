#include "isosceles_triangle.h"

// класс равнобедренного треугольника, наследуется от Triangle

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B): Triangle(a, b, a, A, B, A)
{
    name = "\nРавнобедренный треугольник";
}