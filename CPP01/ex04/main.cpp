#include <iostream>
#include <fstream>
#include <string>

void repe(int pos, std::string s1, std::string s2){
	std::string result;
	// size_t pos = 0;
	size_t lastPos = 0;

	while ((pos = s1.find(s2, lastPos))){// != std::string::npos) {
		// Append the part of the string before the occurrence of the search string
		result.append(s1, lastPos, pos - lastPos);

		// Append the replacement string
		result += s2;

		// Move the position after the occurrence of the search string
		lastPos = pos + s2.length();
	}
}

int	main(int ac, char **av){
	if (ac != 4){
		std::cout << "enter a filenmane and two strings" << std::endl;
		return (1);
	}
	std::ifstream infile(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::ofstream outfile(std::string(av[1]) + ".replace");

	std::string content;
	while (std::getline(infile, content))
	{
		int pos = 0;
		while (pos = s1.find(s2))
		{
			content.repe(pos, s1, s2);
			pos += s2.length();
		}
		outfile << content << '\n';
	}
	return (0);
}
