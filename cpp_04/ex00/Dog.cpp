/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/29 12:41:52 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : type("Dog"){
	std::cout << "Animal of type: " << this->type << " default constructor" << std::endl; 
}

Dog::Dog(const Dog& other) : Animal(){
	*this = other;
	std::cout << "Animal of type: " << this->type << " copy constructor" << std::endl; 
}

Dog& Dog::operator=(const Dog& rhs){
	this->type = rhs.type;
	std::cout << "Animal of type: " << this->type << " copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Animal of type: " << this->type << " destructor called." << std::endl;
}

std::string	Dog::getType() const{
	return this->type;
}

void	Dog::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound :\nWoof woof" << std::endl;
}
