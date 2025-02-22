#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "figure.h"

class Triangle : public Figure 
{
  protected:
    int a, b, c; // Стороны
    int A, B, C; // Углы

  public:
    Triangle(int a, int b, int c, int A, int B, int C);
    void print_info() const override;
};

#endif // TRIANGLE_H