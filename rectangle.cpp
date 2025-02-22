#include "rectangle.h"

// класс прямоугольника, наследуется от Quadrilateral

Rectangle::Rectangle(int a, int b): Quadrilateral(a, b, a, b, 90, 90, 90, 90)
{
    name = "\nПрямоугольник";
}