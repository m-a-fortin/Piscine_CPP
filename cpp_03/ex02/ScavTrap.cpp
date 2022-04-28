/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:58:05 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/28 12:51:07 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(){
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	this->name = "John Doe";
	std::cout << "ScavTrap " << this->name << " Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	this->name = name;
	std::cout << "ScavTrap " << this->name << " string constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy){
	*this = cpy;
	std::cout << "ScavTrap " << this->name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy){
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->ad = cpy.ad;
	std::cout << "ScavTrap " << this->name << " copy assigment operator called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << this->name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if(this->hp == 0)
		std::cout << "ScavTrap " << this->name << " is dead. Can't attack !" << std::endl;
	else if(this->ep == 0)
		std::cout << "ScavTrap " << this->name << " has not enough energy to attack" << std::endl;
	else
	{ 
		std::cout << "ScavTrap " << this->name << " attacks " << target <<
		" causing " << this->ad << " points of damage!" << std::endl;
		this->ep--;
	}
}
