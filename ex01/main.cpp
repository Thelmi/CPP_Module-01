#include "Zombie.hpp"

int main()
{
	Zombie zombieOne("x");
	zombieOne.announce();
	Zombie *zombies = zombieOne.zombieHorde(5, "y");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
}