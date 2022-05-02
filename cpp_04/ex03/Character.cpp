/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 09:24:21 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/30 15:04:13 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default"), isize(0), full(false){
}

Character::Character(const Character& other) : ICharacter(){
	*this = other;
}

Character::Character(const std::string& name) : name(name), isize(0), full(false){}

Character& Character::operator=(const Character& rhs){
	this->name = rhs.name;
	this->isize = rhs.isize;
	this->full = rhs.full;
	for (int i = 0; i < isize; i++){
		this->inventory[i] = rhs.inventory[i];
	}
	return *this;
}

Character::~Character(){}

std::string const & Character::getName() const{
	return this->name;
}

void Character::equip(AMateria* m){
	if (this->isize != 3){
		this->full = true;
		this->garbage = this->inventory[this->isize]; // dont forget to delete after.
	}
	this->inventory[this->isize] = m;
	if (this->isize != 3)
		this->isize++;
}

void Character::unequip(int idx){
	
}