/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:12:18 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/28 12:53:04 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap(){
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	this->name = "John Doe";
	std::cout << "FragTrap " << this->name << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	this->name = name;
	std::cout << "FragTrap " << this->name << " string constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name << " Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy){
	*this = cpy;
	std::cout << "FragTrap " << this->name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& cpy){
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->ad = cpy.ad;
	std::cout << "FragTrap " << this->name << " copy assigment operator called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << this->name << " is asking for a high fives ! Don't leave him hanging" << std::endl;
}

void FragTrap::attack(const std::string& target){
	if(this->hp == 0)
		std::cout << "FragTrap " << this->name << " is dead. Can't attack !" << std::endl;
	else if(this->ep == 0)
		std::cout << "FragTrap " << this->name << " has not enough energy to attack" << std::endl;
	else
	{ 
		std::cout << "FragTrap " << this->name << " attacks " << target <<
		" causing " << this->ad << " points of damage!" << std::endl;
		this->ep--;
	}
}
