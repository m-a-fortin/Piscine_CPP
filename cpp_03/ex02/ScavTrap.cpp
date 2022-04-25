/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 11:58:05 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 11:58:09 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(){
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	this->name = "John Doe";
	std::cout << "ScravTrap " << this->name << " Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	this->name = name;
	std::cout << "ScravTrap " << this->name << " string constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy){
	*this = cpy;
	std::cout << "ScravTrap " << this->name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy){
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->ad = cpy.ad;
	std::cout << "ScravTrap " << this->name << " copy assigment operator called" << std::endl;
	return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << this->name << " is now in Gate keeper mode" << std::endl;
}
