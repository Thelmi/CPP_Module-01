#include "stream.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Program should have only 4 arguements" << std::endl;
		return 1;
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	replaceAndWrite(filename, s1, s2);
	return 0;
}
