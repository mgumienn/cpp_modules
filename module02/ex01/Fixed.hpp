#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _rawValue;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int int_Value);
	Fixed(const float float_Value);
	int getRawBits( void );
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed &operator=(const Fixed &fixed);
	~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif