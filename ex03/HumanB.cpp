#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weaponB.getType() << std::endl;
}

HumanB::HumanB(std::string Name)
{
	name = Name;
}

void HumanB::setWeapon(Weapon WeaponB)
{
	weaponB = WeaponB;
}