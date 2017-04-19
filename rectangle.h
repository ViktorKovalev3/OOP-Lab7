#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "parallelogram.h"

class Rectangle : public Parallelogram
{
public:
    Rectangle();
    virtual double Area() const override;
    virtual double Perimeter() const override;
};

#endif // RECTANGLE_H
