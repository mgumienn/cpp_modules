#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_rawValue = fixed._rawValue;
}

Fixed::Fixed(const int int_Value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawValue = int_Value * (1 << this->_bits);
}

Fixed::Fixed(const float float_Value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawValue = roundf(float_Value * (1 << this->_bits));
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_rawValue = fixed._rawValue;
	return *this;
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

float Fixed::toFloat( void ) const
{
	float f_value;

	f_value = (float)this->_rawValue / (1 << this->_bits);
	return (f_value);
}

int Fixed::toInt( void ) const
{
	return (this->_rawValue >> 8);
}


int Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawValue);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawValue = raw;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}