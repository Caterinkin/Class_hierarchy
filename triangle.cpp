#include "triangle.h"
#include <iostream>

// Triangle — класс треугольника, наследуется от Figure

Triangle::Triangle(int a, int b, int c, int A, int B, int C): Figure("Треугольник", 3), a(a), b(b), c(c), A(A), B(B), C(C) 
{
}

void Triangle::print_info() const
{
    Figure::print_info();
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}