
#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	HumanA(const std::string& name, Weapon& type);
	void	attack(void);
private:
	Weapon& weapon;
	std::string	name;
};
