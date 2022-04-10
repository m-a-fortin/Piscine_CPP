
#include "Fixed.hpp"

Fixed::Fixed( void ) : value(0){}

Fixed::~Fixed( void ){}

Fixed::Fixed(const Fixed& cpy) 
{
	this->value = cpy.value;
}

int	Fixed::getRawBits( void ) const { return (this->value);}

void	Fixed::setRawBits( int const raw )
{
	this->value = raw;
}

