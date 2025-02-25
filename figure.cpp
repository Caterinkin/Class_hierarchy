#include "figure.h"
#include <iostream>

// базовый класс для всех фигур

Figure::Figure(const std::string& name, int sides_count)
    : name(name), sides_count(sides_count) {
}

void Figure::print_info() const {
    std::cout << name << ":" << std::endl;
}