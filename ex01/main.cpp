#include "Zombie.hpp"

int main()
{
	Zombie zombieone("x");
	zombieone.announce();
	
	Zombie *zombies = zombieone.zombieHorde(5, "y");
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete[] zombies;
}