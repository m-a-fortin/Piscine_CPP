
#include "HumanA.hpp"
#include <iostream>

//Class initializer list to be able to assign the weapon ref.
HumanA::HumanA(const std:: string& _name, Weapon& _weapon) : weapon(_weapon), name(_name){}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
