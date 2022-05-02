/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 10:01:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("cat"){
	std::cout << "Cat default constructor" << std::endl; 
}

Cat::Cat(const Cat& other) : Animal("cat"){
	*this = other;
	std::cout << "Cat copy constructor" << std::endl; 
}

Cat& Cat::operator=(const Cat& rhs){
	this->type = rhs.type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor called." << std::endl;
}

std::string	Cat::getType() const{
	return this->type;
}

void	Cat::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound :\nMeowwwwww" << std::endl;
}
