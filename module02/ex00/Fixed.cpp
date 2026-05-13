#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = fixed._value;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_value = fixed._value;
	return *this;
}

int Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}