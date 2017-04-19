#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "figure.h"
#include <vector>

class Parallelogram : public Figure
{
public:
    Parallelogram();
    virtual double Area() const override;
    virtual double Perimeter() const override;
};

#endif // PARALLELOGRAM_H
