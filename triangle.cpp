#include "triangle.h"
#include <iostream>

// Triangle � ����� ������������, ����������� �� Figure

Triangle::Triangle(int a, int b, int c, int A, int B, int C): Figure("�����������", 3), a(a), b(b), c(c), A(A), B(B), C(C) 
{
}

void Triangle::print_info() const
{
    Figure::print_info();
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}