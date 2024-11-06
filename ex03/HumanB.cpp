#include "HumanB.hpp"

void HumanB::attack()
{
	if (weaponB)
		std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
	else
		std::cout << name << " no Weapon loser" << std::endl;
}

HumanB::HumanB(std::string Name):name(Name),weaponB(NULL)
{
	// name = Name;
	// weaponB = NULL;
}

void HumanB::setWeapon(Weapon &WeaponB) 
{
	weaponB = &WeaponB;
}