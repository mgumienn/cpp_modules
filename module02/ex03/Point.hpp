#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(const float a, const float b);
	Point(const Point &point);
	Point &operator=(const Point &point);
	Fixed getY() const;
	Fixed getX() const;
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif