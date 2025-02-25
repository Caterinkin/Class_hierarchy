#ifndef FIGURE_H
#define FIGURE_H

#include <string>

class Figure {
protected:
    std::string name; // �������� ������
    int sides_count;  // ���������� ������

public:
    Figure(const std::string& name, int sides_count);
    virtual void print_info() const; // ����������� ����� ��� ������ ����������
};

#endif // FIGURE_H