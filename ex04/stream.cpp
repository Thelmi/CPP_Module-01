#include "stream.hpp"

void replaceAndWrite(const std::string &filename, const std::string &s1, const std::string &s2)
{

	std::ifstream inputFile(filename.c_str());
	if (!inputFile) 
	{
		std::cerr << "something wrong, maybe file is closed " << filename << std::endl;
		return;
	}

	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile) {
		std::cerr << "Error: Cannot create output file " << outputFilename << std::endl;
		return;
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outputFile << line << "\n";
	}
}
