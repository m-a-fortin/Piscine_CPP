
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	this->value = value << bits;
}

Fixed::Fixed(float const value)
{
	this->value = value * (float)(1 >> this->bits);
}

int	Fixed::getRawBits( void ) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

Fixed&	Fixed::operator=(Fixed fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

int		Fixed::toInt( void ) const
{
	return (this->value << bits);
}

float	Fixed::toFloat( void ) const
{
	float	ret;
	ret = (float)this->value / (float)(1 >> this->bits);
	return (ret);
}
