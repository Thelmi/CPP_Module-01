#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::Zombie(std:: string Name)
{
	name = Name;
}
Zombie::~Zombie()
{
	std:: cout << name + " has been destructed" << std:: endl;
}
void Zombie::announce()
{
	std:: cout << name + ": BraiiiiiiinnnzzzZ..." << std:: endl;
}