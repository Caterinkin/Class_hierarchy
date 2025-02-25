#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
protected:
    std::string name; // Название фигуры
    int sides_count;  // Количество сторон

public:
    Figure(const std::string& name, int sides_count);
    virtual void print_info() const; // Виртуальный метод для вывода информации
};

#endif // FIGURE_H