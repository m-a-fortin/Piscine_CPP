
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (float)(1 << this->bits));
}

int	Fixed::getRawBits( void ) const 
{
	return (this->value);
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}

int		Fixed::toInt( void ) const
{
	return (this->value >> bits);
}

float	Fixed::toFloat( void ) const
{
	float	ret;
	ret = (float)this->value / (float)(1 << this->bits);
	return (ret);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& value)
{
	stream << value.toFloat();
	return (stream);
}
