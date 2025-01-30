#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &WeaponA):name(Name),weaponA(WeaponA)
{
	
}
