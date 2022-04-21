
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->setStat("hp", 100);
	this->setStat("ep", 50);
	this->setStat("ad", 20);
	this->setName("John Doe");
}

ScavTrap::ScavTrap(std::string name){
	std::cout << "ScavTrap String constructor called" << std::endl;
	this->setStat("hp", 100);
	this->setStat("ep", 50);
	this->setStat("ad", 20);
	this->setName(name);
}

ScavTrap::~ScavTrap(){std::cout << "ScavTrap Destructor called" << std::endl;}

ScavTrap::ScavTrap(const ScavTrap& cpy){
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy){
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->setStat("hp", cpy.getStat("hp"));
	this->setStat("ep", cpy.getStat("ep"));
	this->setStat("ad", cpy.getStat("ad"));
	return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
}
