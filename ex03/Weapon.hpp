#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string Type);
		const std::string& getType();
		void setType(std::string Type);
} ;
# endif

