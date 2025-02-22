#include <iostream>
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

int main() 
{
    setlocale(LC_ALL, "rus");

    Triangle triangle(10, 20, 30, 50, 60, 70); // треугольник
    RightTriangle right_triangle(10, 20, 30, 50, 60); //  прямоугольный треугольник
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60); // равнобедренный треугольник
    EquilateralTriangle equilateral_triangle(30); // равносторонний треугольник
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80); // четырёхугольник
    Rectangle rectangle(10, 20); // прямоугольник
    Square square(20); //квадрат
    Parallelogram parallelogram(20, 30, 30, 40); // параллелограмм
    Rhombus rhombus(30, 30, 40); // ромб

    triangle.print_info(); 
    right_triangle.print_info();
    isosceles_triangle.print_info();
    equilateral_triangle.print_info();
    quadrilateral.print_info();
    rectangle.print_info();
    square.print_info();
    parallelogram.print_info();
    rhombus.print_info();

    return 0;
}