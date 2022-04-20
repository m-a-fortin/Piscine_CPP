
#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : value(0){}

Fixed::~Fixed( void ){}

Fixed::Fixed(int const value){
	this->value = value << bits;
}

Fixed::Fixed(float const value){
	this->value = (int)roundf(value * (float)(1 << this->bits));//256
}

int	Fixed::getRawBits( void ) const {
	return (this->value);
}

void	Fixed::setRawBits(const int value){
	this->value = value;
}


Fixed::Fixed(const Fixed &cpy){
	*this = cpy;
}

Fixed&	Fixed::operator=(const Fixed& fixed){
	this->value = fixed.getRawBits();
	return *this;
}

int		Fixed::toInt( void ) const{
	return (this->value >> bits);
}

float	Fixed::toFloat( void ) const{
	float	ret;
	ret = (float)this->value / (float)(1 << this->bits);
	return (ret);
}

bool	Fixed::operator<(const Fixed& compare) const{
	return (this->getRawBits() < compare.getRawBits());
}

bool	Fixed::operator>(const Fixed& compare) const{
	return (this->getRawBits() >  compare.getRawBits());
}

bool	Fixed::operator>=(const Fixed& compare) const{
	return (this->getRawBits() >= compare.getRawBits());
}

bool	Fixed::operator<=(const Fixed& compare) const{
	return (this->getRawBits() <= compare.getRawBits());
}

bool	Fixed::operator==(const Fixed& compare) const{
	return (this->getRawBits() == compare.getRawBits());
}

bool	Fixed::operator!=(const Fixed& compare) const{
	return (this->getRawBits() != compare.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& other) const{
		Fixed	ret;
		ret.setRawBits(this->getRawBits() + other.getRawBits());
		return (ret);
}

//Multiplication de deux fixed point (representer 24 bit pour entier et 8 pour decimal) devient
//32 bit pour l'entier et 0 pour les decimal. C'est pour ca qu'on bit shift le resultat
Fixed	Fixed::operator*(const Fixed& other) const{
	Fixed ret;
	int multi;
	multi = this->getRawBits() * other.getRawBits();
	ret.setRawBits(multi >> bits);
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& other) const{
	Fixed ret;
	ret.setRawBits(this->getRawBits() - other.getRawBits());
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& other) const{
	Fixed ret;
	int div;
	div = (this->getRawBits() << bits) / other.getRawBits();
	ret.setRawBits(div);
	return (ret);
}

Fixed&	Fixed::operator++(){
	this->value++;
	return (*this);
}

Fixed	Fixed::operator++(int){
	Fixed	ret = *this;
	++this->value;
	return(ret);
}

Fixed& Fixed::operator--(){
	this->value--;
	return(*this);
}
Fixed	Fixed::operator--(int){
	Fixed	ret = *this;
	--this->value;
	return (ret);
}

const	Fixed&	Fixed::min(const Fixed& one, const Fixed& two){
	if (one < two)
		return (one);
	return(two);
}

Fixed&	Fixed::min(Fixed& one, Fixed& two){
	if (one < two)
		return (one);
	return(two);
}

const	Fixed&	Fixed::max(const Fixed& one, const Fixed& two){
	if (one > two)
		return (one);
	return(two);
}

Fixed&	Fixed::max(Fixed& one, Fixed& two){
	if (one > two)
		return (one);
	return(two);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& value){
	stream << value.toFloat();
	return (stream);
}
