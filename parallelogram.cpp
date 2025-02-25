#include "parallelogram.h"

// класс параллелограмма, наследуется от Quadrilateral

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {
    name = "\nПараллелограмм";
}