/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 15:38:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/14 15:08:48 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed&);
		Fixed(const int value);
		Fixed(const float value);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits(const int value);
		static const	Fixed&	min(const Fixed& one, const Fixed& two);
		static Fixed&	min(Fixed& one, Fixed& two);
		static const	Fixed& max(const Fixed& one, const Fixed& two);
		static Fixed&	max(Fixed& one, Fixed& two);
	//operator overloads
			//assignation
		Fixed&	operator=(const Fixed&);
			//comparasion
		bool	operator<(const Fixed& other) const;
		bool	operator>(const Fixed& other) const;
		bool	operator>=(const Fixed& other) const;
		bool	operator<=(const Fixed& other) const;
		bool	operator==(const Fixed& other) const;
		bool	operator!=(const Fixed& other) const;
			//arithmetic
		Fixed	operator+(const Fixed& other) const;
		Fixed	operator*(const Fixed& other) const;
		Fixed	operator-(const Fixed& other) const;
		Fixed	operator/(const Fixed& other) const;
			// increment/decrement 
		Fixed&	operator++(); // prefix
		Fixed& operator--();
		Fixed	operator++(int); // postfix
		Fixed	operator--(int); 
	private:
		int			value;
		static const int	bits = 8;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& value);
