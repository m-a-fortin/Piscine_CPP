/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafortin <mafortin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 12:46:35 by mafortin          #+#    #+#             */
/*   Updated: 2022/04/25 15:31:03 by mafortin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("John Doe_clap_name"), ScavTrap("John Doe_clap_name"), FragTrap("John Doe_clap_name"){
	this->name = "John Doe";
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
	std::cout << " DiamondTrap " << this->name << " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other.name + "_clap_name"), ScavTrap(other.name + "_clap_name"), FragTrap(other.name + "_clap_name"){
	*this = other;
	std::cout << "DiamondTrap " << this->name << " Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name"){
	this->name = name;
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
	std::cout << "DiamondTrap " << this->name << " String constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs){
	this->hp = rhs.hp;
	this->ep = rhs.ep;
	this->ad = rhs.ad;
	this->name = rhs.name;
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() const{
	std::cout << "DiamonTrap name : " << this->name << "\n"
	<< "ClapTrap name : " << ClapTrap::name << std::endl;
}
