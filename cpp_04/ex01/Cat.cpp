/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 10:46:19 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat() : Animal("cat"){
	this->brain = new Brain;
	std::cout << "Cat default constructor" << std::endl; 
}

Cat::Cat(const Cat& other) : Animal("cat"){
	*this = other;
	std::cout << "Cat copy constructor" << std::endl; 
}

Cat& Cat::operator=(const Cat& rhs){
	this->type = rhs.type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

Cat::~Cat(){
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

std::string	Cat::getType() const{
	return this->type;
}

void	Cat::giveIdea(char **argv){
	int j = 0;
	for (int i = 1; argv[i]; i++){
		std::cout << "TEST" << std::endl;
		this->brain->ideas[j] = std::string(argv[i]);
		j++;
		if (!argv[i + 1])
			this->brain->ideas[j] = "";
	}
}

void	Cat::printIdea() const{
	for(int i = 0; !this->brain->ideas[i].empty(); i++)
		std::cout << this->brain->ideas[i] << std::endl;
}

void	Cat::makeSound() const{
	std::cout << "The animal of type " << this->type << " makes the sound :\nMeowwwwww" << std::endl;
}
