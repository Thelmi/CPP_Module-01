#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std:: string Name);
		~Zombie();
		void announce();
		Zombie* newZombie( std::string name);
		void randomChump(std::string name);
};

#endif