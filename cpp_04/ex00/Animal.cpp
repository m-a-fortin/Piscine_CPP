/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:42 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 09:59:18 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("no type"){
	std::cout << "Animal of type: " << this->type << " default constructor" << std::endl; 
}

Animal::Animal(const Animal& other){
	*this = other;
	std::cout << "Animal of type: " << this->type << " copy constructor" << std::endl; 
}

Animal& Animal::operator=(const Animal& rhs){
	(void)rhs;
	std::cout << "Animal of type: " << this->type << " copy assignment operator called" << std::endl;
	return *this;
}

Animal::Animal(std::string type) : type(type){
}

Animal::~Animal(){
	std::cout << "Animal of type: " << this->type << " destructor called." << std::endl;
}

std::string	Animal::getType() const{
	return this->type;
}

void	Animal::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound:\nComplete silence." << std::endl;
}
