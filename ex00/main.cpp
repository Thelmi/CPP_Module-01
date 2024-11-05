#include "Zombie.hpp"

int main()
{
	Zombie zombieone("x");
	zombieone.announce();
	
	Zombie *zombieptr = zombieone.newZombie("hello");
	zombieptr->announce();
	delete (zombieptr);
}