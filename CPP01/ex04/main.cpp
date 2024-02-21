#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av){
	if (ac != 4){
		std::cout << "enter a filenmane and two strings" << std::endl;
		return (1);
	}
	std::ifstream infile(av[1]);
	if (!infile)
		return (-1);
	
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::ofstream outfile(std::string(av[1]) + ".replace");
	std::string tmp = "";
	std::string result = "";
	while (std::getline(infile, result))
	{
		int lastPos = 0;
		int pos = result.find(s1, lastPos);
		if (s1 == ""){
			outfile << result << '\n';
			continue ;
		}
		while (pos < result.size())
		{
			tmp.append(result, lastPos, pos - lastPos);
			tmp.append(s2);
			pos += s1.length();
			lastPos = pos;
			pos = result.find(s1, lastPos);
		}
		tmp.append(result, lastPos);
		outfile << tmp << '\n';
		tmp = "";
	}
	return (0);
}
