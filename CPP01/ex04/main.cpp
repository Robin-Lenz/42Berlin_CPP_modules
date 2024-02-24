#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av){
	if (ac != 4){
		std::cout << "enter a filenmane and two strings" << std::endl;
		return (1);
	}
	std::ifstream infile;
	infile.open(av[1]);
	if (!infile)
		return (-1);
	
	std::string s1(av[2]);
	std::string s2(av[3]);
	std::ofstream outfile;
	outfile.open(((std::string(av[1]) + ".replace").c_str()));
	std::string tmp = "";
	std::string result = "";
	while (std::getline(infile, result))
	{
		int lastPos = 0;
		unsigned int pos = result.find(s1, lastPos);
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
	infile.close();
	outfile.close
	return (0);
}
