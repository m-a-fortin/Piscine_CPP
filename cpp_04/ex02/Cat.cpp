/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:18:12 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/27 14:10:12 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat() : type("Cat"){
	std::cout << "Animal of type: " << this->type << " default constructor" << std::endl;
	this->brain = new Brain; 
}

Cat::Cat(const Cat& other){
	*this = other;
	std::cout << "Animal of type: " << this->type << " copy constructor" << std::endl; 
}

Cat& Cat::operator=(const Cat& rhs){
	this->type = rhs.type;
	std::cout << "Animal of type: " << this->type << " copy assignment operator called" << std::endl;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

Cat::~Cat(){
	delete brain;
	std::cout << "Animal of type: " << this->type << " destructor called." << std::endl;
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
