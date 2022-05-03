/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/05/03 14:59:16 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat() : AAnimal("cat"){
	std::cout << "Cat default constructor" << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat& other) : AAnimal("cat"){
	*this = other;
	std::cout << "Animal of type: " << this->type << " copy constructor" << std::endl; 
}

Cat& Cat::operator=(const Cat& rhs){
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	std::cout << "Animal of type: " << this->type << " copy assignment operator called" << std::endl;
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
		std::string current(argv[i]);
		this->brain->ideas[j] = current;
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
