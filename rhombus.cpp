#include "rhombus.h"

// класс ромба, наследуется от Parallelogram

Rhombus::Rhombus(int a, int A, int B)
    : Parallelogram(a, a, A, B) {
    name = "\nРомб";
}