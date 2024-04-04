#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "enter one argment only\n";
		return 1;
	}
	std::string a = av[1];
	ScalarConverter::convert(a);
	return 0;
}

bool isChar(const std::string &target){
	if (!(isprint(target.c_str()[0])))
		return 1;
	return 0;
}

bool isInt(const std::string &target){
	int i = 0;

	while (target[i]){
		if (!(target[i] >= '0' && target[i] <= '9'))
			return 0;
		i++;
	}
	return 1;
}