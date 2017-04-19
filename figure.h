#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
#include "vector2d.h"
#include <vector>

struct BadCoordinateException
{
    BadCoordinateException(){}
    ~BadCoordinateException(){}
};

class Figure
{
public:
    Figure(/* input coordinate */){};
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
protected:
    std::vector<Point> coordinates;
};

#endif // FIGURE_H
