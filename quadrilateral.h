#pragma once
#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

#include "figure.h"

class Quadrilateral : public Figure 
{
  protected:
    int a, b, c, d; // �������
    int A, B, C, D; // ����

  public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    void print_info() const override;
};

#endif // QUADRILATERAL_H