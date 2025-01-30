#include "Zombie.hpp"

int main()
{
	Zombie zombieOne;
	//zombieOne.announce();
	zombieOne.randomChump("X");
	Zombie *zombiePtr = zombieOne.newZombie("hello");
	zombiePtr->announce();
	delete (zombiePtr);
}