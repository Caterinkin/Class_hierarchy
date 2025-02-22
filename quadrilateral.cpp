#include "quadrilateral.h"
#include <iostream>

// ����� ���������������, ����������� �� Figure

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D): Figure("\n��������������", 4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) 
{
}

void Quadrilateral::print_info() const 
{
    Figure::print_info();
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
}