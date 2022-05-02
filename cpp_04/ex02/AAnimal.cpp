/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:09:42 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 09:10:40 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("No Type"){
	std::cout << "ABSTRACT animal default constructor" << std::endl; 
}

AAnimal::AAnimal(const AAnimal& other){
	*this = other;
	std::cout << "ABSTRACT animal copy constructor" << std::endl; 
}

AAnimal& AAnimal::operator=(const AAnimal& rhs){
	(void)rhs;
	std::cout << "ABSTRACT animal copy assignment operator called" << std::endl;
	return *this;
}

AAnimal::AAnimal(std::string type) : type(type){
}

AAnimal::~AAnimal(){
	std::cout << "ABSTRACT animal destructor called." << std::endl;
}
