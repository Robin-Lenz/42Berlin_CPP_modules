#include "ScalarConverter.hpp"

int main(){
	ScalarConverter::convert("5");
	return 0;
}

bool isChar(const std::string &target){
	if (target.length() != 1)
		return 0;
	if (isprint(target.c_str()[0])){//target[0] >= '0' && target[0] <= '9'
		return 1;
	}
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