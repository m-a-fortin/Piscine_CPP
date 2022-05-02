/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:15:08 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 12:09:09 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(){
}

AMateria::AMateria(const AMateria& other){
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& rhs){
	this->type = rhs.type;
	return *this;
}

AMateria::~AMateria(){
}

AMateria::AMateria(const std::string& type){
	this->type = type;
}

const std::string& AMateria::getType() const{
	return this->type;
}

void AMateria::use(ICharacter& target){
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "* Materia has no type *" << std::endl;
}
