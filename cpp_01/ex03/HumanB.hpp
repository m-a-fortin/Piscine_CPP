
#include "Weapon.hpp"
#include <string>

class HumanB
{
public:
	HumanB (const std::string& name);
	void	attack(void);
	void	setWeapon(Weapon& weapon);
private:
	Weapon *weapon;
	std::string	name;
};
