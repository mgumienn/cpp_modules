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
	bool operator<=(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>(const Fixed &fixed) const;
	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;
	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif