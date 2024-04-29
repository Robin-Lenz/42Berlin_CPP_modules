#include "Helper.hpp"
#include "ScalarConverter.hpp"

void PrintFloat(float i, double d_err){
	if (d_err > std::numeric_limits<float>::max() || d_err < std::numeric_limits<float>::min()){
		std::cout << "float impossible\n";
	}
	else if (i - static_cast<int>(i) == 0){
		std::cout << "float: " << i << ".0f" <<'\n';
	}
	else{
		std::cout << "float: " << i << "f" <<'\n';
	}
}

void PrintInt(int i, double d_err){
	if (d_err < -std::numeric_limits<int>::max() || d_err < std::numeric_limits<int>::max())
		std::cout << "int: " << i << '\n';
	else{
		std::cout << "int: impossible\n";
	}
}

void PrintDouble(double i){
	if (i >= std::numeric_limits<double>::min() || i  <= std::numeric_limits<double>::max()){
		std::cout << "double: impossible\n";
	}
	else{
		if (i - static_cast<int>(i) == 0)
			std::cout << "double: " << static_cast<double>(i) << ".0" << '\n';
		else{
			std::cout << "double: " << static_cast<double>(i) << '\n';
		}
	}
}

void PrintChar(int i){
	char c = static_cast<char>(i);
	if (i < 0 || i > 127)
		std::cout << "char: impossible\n";
	else if (std::isprint(c) || std::isalpha(c))
		std::cout << "char: " << c << '\n';
	else
		std::cout << "char: Non displayable\n";
}