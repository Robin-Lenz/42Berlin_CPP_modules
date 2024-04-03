#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	
};

ScalarConverter::ScalarConverter(const ScalarConverter &a){
	*this = a;
};

ScalarConverter::~ScalarConverter(){
	
};

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &a){
	(void)a;
	return *this;
};

void ScalarConverter::convert(const std::string &target){
	if (target.length() == 0)
		return;//throw except
	try{
		if (isChar(target) == 1){
			std::cout << "char: " << atoi(target.c_str()) << '\n';
		}
		else if (isInt(target) == 1){
			std::cout << "int: " << atoi(target.c_str()) << '\n';
		}
		// else if (isFloat(target) == 1){

		// }
	}
	catch (std::exception &e){
		std::cout << "catch\n";// don't forgett to write what()
	}
	
	// try{
	// 	char c = atoi(target.c_str());
	// 	std::cout << c << '\n';
	// }
	// catch (std::exception &e){
	// 	std::cout << "catch\n";
	// }

	// try{
	// 	int c = atoi(target.c_str());
	// 	std::cout << c << '\n';
	// }
	// catch (std::exception &e){
	// 	std::cout << "catch\n";
	// }

	// try{
	// 	float c = atoi(target.c_str());
	// 	std::cout << "float: " << c << (c == std::floor(c) ? ".0f" : "f") << std::endl;
	// }
	// catch (std::exception &e){
	// 	std::cout << "catch\n";
	// }

	// try{
	// 	double c = atoi(target.c_str());
	// 	std::cout << c << '\n';
	// }
	// catch (std::exception &e){
	// 	std::cout << "catch\n";
	// }
}