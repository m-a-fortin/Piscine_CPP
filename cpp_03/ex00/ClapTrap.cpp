/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:43:43 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/20 15:27:42 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("John Doe"), hp(10), ep(10), ad(0){std::cout << "Default constructor called" << std::endl;}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), ad(0){ std::cout << "String constructor called" << std::endl;}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	this->name = rhs.name;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if(this->hp == 0)
		std::cout << "ClapTrap " << this->name << " is dead. Can't attack !" << std::endl;
	else if(this->ep == 0)
		std::cout << "ClapTrap " << this->name << " has not enough energy to attack" << std::endl;
	else
	{ 
		std::cout << "ClapTrap " << this->name << " attacks " << target <<
		" causing " << this->ad << " points of damage!" << std::endl;
		this->ep--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->hp == 0)
	{
			std::cout << "ClapTrap " << this->name << " is already dead" << std::endl;
			return ;
	}
	this->hp -= amount;
	if (this->hp < 0)
		this->hp = 0;
	std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage\n"
	<< this->hp << " hit point left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(this->hp == 0)
		std::cout << "ClapTrap " << this->name << " is dead. Can't repair !" << std::endl;
	else if(this->ep == 0)
		std::cout << "ClapTrap " << this->name << " has not enough energy to repair" << std::endl;
	else
	{
		this->hp += amount;
		std::cout << "ClapTrap " << this->name << " repaired and gained " << amount << " hit points\n"
		<< this->hp << " hit point left" << std::endl;
		this->ep--;
	}
}
