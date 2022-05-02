/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 18:33:32 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("cat"){
	std::cout << "Animal of type: " << this->type << " default constructor" << std::endl; 
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal("cat"){
	*this = other;
	std::cout << "Animal of type: " << this->type << " copy constructor" << std::endl; 
}

WrongCat& WrongCat::operator=(const WrongCat& rhs){
	(void)rhs;
	std::cout << "Animal of type: " << this->type << " copy assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Animal of type: " << this->type << " destructor called." << std::endl;
}

std::string	WrongCat::getType() const{
	return this->type;
}

void	WrongCat::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound :\nMeowwwwww" << std::endl;
}
