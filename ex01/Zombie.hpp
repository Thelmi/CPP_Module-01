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
		void setName(std:: string Name);
		Zombie* zombieHorde(int N, std::string name );
		void announce();
};

#endif