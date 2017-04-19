#ifndef RHOMBUS_H
#define RHOMBUS_H
#include "parallelogram.h"

class Rhombus : public Parallelogram
{
public:
    Rhombus();
    virtual double Area() const override;
    virtual double Perimeter() const override;
};

#endif // RHOMBUS_H
