#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cstdlib> // atoi
#include <cmath> //floor
#include <cctype> // isprint

#include <cstdio>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &a);
		~ScalarConverter();

		ScalarConverter &operator=(const ScalarConverter &a);
	
	public:
		static void convert(std::string &target);

};

bool isChar(const std::string &target);
bool isInt(const std::string &target);

#endif