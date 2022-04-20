/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:29:09 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/19 13:21:32 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a(1);	
	Fixed const b( Fixed(5.05f) * Fixed(2) );
	Fixed const c(Fixed(10) / Fixed(2));
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " << a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b | 5.05 * 2  = " << b << std::endl;
	std::cout << "c | 10 / 2 =  " << c << std::endl;
	std::cout << "Largest number between b and c is : " << Fixed::max( b, c ) << std::endl;
	std::cout << "Smalles number between b and c is : " << Fixed::min( b, c ) << std::endl;
	std::cout << "Largest number between a and b is : " << Fixed::max(b, a) << std::endl;
	return 0;
}
