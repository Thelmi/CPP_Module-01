#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string Type)
{
	type = Type;
}
Weapon::Weapon()
{

}
Weapon::Weapon(std::string Type)
{
	type = Type;
}
