/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 10:01:36 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("dog"){
	std::cout << "Dog default constructor" << std::endl; 
}

Dog::Dog(const Dog& other) : Animal("dog"){
	*this = other;
	std::cout << "Dog copy constructor" << std::endl; 
}

Dog& Dog::operator=(const Dog& rhs){
	this->type = rhs.type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor called." << std::endl;
}

std::string	Dog::getType() const{
	return this->type;
}

void	Dog::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound :\nWoof woof" << std::endl;
}
