/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:15:08 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/29 15:07:50 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

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

AMateria::AMateria(std::string& const type){
	this->type = type;
}

const std::string& AMateria::getType() const{
	return this->type;
}
