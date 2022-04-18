
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

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

//INT : Representation le plus simple. La var Bits represente le nombre de bit reserver pour la partie 
//apres la virgule. Donc si on a un entier, on doit simplement shifter du numbre de bits reserver vers la gauche
//pour le stocker. Poue retourner un int entier, on shift vers la droite.
Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value << this->bits;
}

int		Fixed::toInt( void ) const
{
	return (this->value >> this->bits);
}

//FLOAT:
//Source pour l'algo.
//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c
//https://stackoverflow.com/questions/3402702/converting-floating-point-to-32-bit-fixed-point-in-java
//1 << Bits represente 2^Bits. On fait ca pour 
//On doit multiplier le float par 2^Bits reserver pour trouver notre fixed point.
//Division pour le ramener en float.
Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(value * (float)(1 << this->bits));
}

float	Fixed::toFloat( void ) const
{
	float	ret;
	ret = (float)this->value / (float)(1 << this->bits);
	return (ret);
}

int	Fixed::getRawBits( void ) const 
{
	return (this->value);
}

//Operator overload
Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& value)
{
	stream << value.toFloat();
	return (stream);
}
