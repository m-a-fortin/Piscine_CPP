/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:15:08 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 09:15:52 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :  AMateria("ice"){
}

Ice::Ice(const Ice& other) : AMateria("ice"){
	*this = other;
}

Ice& Ice::operator=(const Ice& rhs){
	this->type = rhs.type;
	return *this;
}

Ice::~Ice(){
}

Ice::Ice(const std::string& type){
	this->type = type;
}

Ice* Ice::clone() const{
	Ice *new_ice = new Ice;
	return (new_ice);
}
