#include <string>
#include <iomanip>

class Point
{
private:
public:
    double x;
    double y;
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    double operator-(const Point &o) const;

    bool operator==(const Point &o) const;

    bool operator!=(const Point &o) const;

    Point operator/(const Point &o) const;

    friend std::ostream &operator<<(std::ostream &os, const Point &p);
};
