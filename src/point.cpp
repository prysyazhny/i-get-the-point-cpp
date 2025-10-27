#include "point.hpp"
#include <cmath>
#include <iomanip>
#include <ostream>

double Point::operator-(const Point &o) const
{
   double dx = x - o.x;
   double dy = y - o.y;
   return std::sqrt(dx * dx + dy * dy);
}

bool Point::operator==(const Point &o) const
{
   return (x == o.x) && (y == o.y);
}

bool Point::operator!=(const Point &o) const
{
   return !(*this == o);
}

Point Point::operator/(const Point &o) const
{
   return Point((x + o.x) / 2.0, (y + o.y) / 2.0);
}

std::ostream &operator<<(std::ostream &os, const Point &p)
{
   os << std::fixed << std::setprecision(2) << "(" << p.x << ", " << p.y << ")";
   return os;
}
