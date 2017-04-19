#include "parallelogram.h"
#include "vector2d.h"
#include <cmath>

Parallelogram::Parallelogram(Point point1, Point point2, Point point3)
{
    coordinates.emplace_back(point1);
    coordinates.emplace_back(point2);
    coordinates.emplace_back(point3);
}

double Parallelogram::Area() const
{
    Vector2D edge1(coordinates[1], coordinates[2]),
             edge2(coordinates[2], coordinates[3]);
    return edge1.abs() * edge2.abs() * sin(edge1, edge2);
}

double Parallelogram::Perimeter() const
{
    Vector2D edge1(coordinates[1], coordinates[2]),
             edge2(coordinates[2], coordinates[3]);
    return 2 * edge1.abs() + 2 * edge2.abs();
}
