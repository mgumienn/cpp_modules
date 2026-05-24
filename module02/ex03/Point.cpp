#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const float a, const float b): _x(Fixed(a)), _y(Fixed(b))
{
}

Point::Point(const Point &point): _x(point._x), _y(point._y)
{
}

Point &Point::operator=(const Point &point)
{
	if (this != &point)
	{
		(Fixed&)this->_x = point._x;
		(Fixed&)this->_y = point._y;
	}
	return *this;
}

Fixed Point::getX() const
{
	return this->_x;
}

Fixed Point::getY() const
{
	return this->_y;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed AB = (b.getX() - a.getX()) * (point.getY() - a.getY()) -  (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed BC = (c.getX() - b.getX()) * (point.getY() - b.getY()) -  (c.getY() - b.getY()) * (point.getX() - b.getX());
	Fixed CA = (a.getX() - c.getX()) * (point.getY() - c.getY()) -  (a.getY() - c.getY()) * (point.getX() - c.getX());

	if(AB > 0 && BC > 0 && CA > 0)
		return true;
	if(AB < 0 && BC < 0 && CA < 0)
		return true;
	return false;
}

Point::~Point()
{
}