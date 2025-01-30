#include "Harl.hpp"

void Harl::debug()
{
	std:: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std:: cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std:: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std:: cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int level_index = -1;
	void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++) 
	{
		if (levels[i] == level)
		{
				level_index = i;
		}
	}
	switch (level_index)
	{
		case 0:
			(this->*functions[0])();
			// Fall through
		case 1:
			(this->*functions[1])();
			 // Fall through
		case 2:
			(this->*functions[2])();
			 // Fall through
		case 3:
			(this->*functions[3])();
			break ;
		default:
			std::cout << "invalid input" << std::endl;
			return ;
	}
}