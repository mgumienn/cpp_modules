#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int _value;
	static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	int getRawBits( void );
	void setRawBits( int const raw );
	Fixed &operator=(const Fixed &fixed);
	~Fixed();
};

#endif