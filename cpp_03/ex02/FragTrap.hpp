

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	FragTrap&	operator=(const FragTrap&);
	~FragTrap();
	void	highFivesGuys();
private:
};
