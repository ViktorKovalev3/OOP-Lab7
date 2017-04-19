#ifndef SQUARE_H
#define SQUARE_H
#include "rectangle.h"

class Square : public Rectangle
{
public:
    Square();
    virtual double Area() const override;
    virtual double Perimeter() const override;
};

#endif // SQUARE_H
