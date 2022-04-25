/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:42 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 18:33:20 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << "Animal of type: " << this->type << " default constructor" << std::endl; 
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	*this = other;
	std::cout << "Animal of type: " << this->type << " copy constructor" << std::endl; 
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs){
	(void)rhs;
	std::cout << "Animal of type: " << this->type << " copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Animal of type: " << this->type << " destructor called." << std::endl;
}

std::string	WrongAnimal::getType() const{
	return this->type;
}

void	WrongAnimal::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound:\nWrong usage of inheritance." << std::endl;
}
