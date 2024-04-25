/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:01:02 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/08 18:26:16 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

const char *ScalarConverter::Impossible::what() const throw(){
	return ("Impossible to convert\n");
}

const char *ScalarConverter::InvalidEntry::what() const throw(){
	return ("Invalid entry\n");
}

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

void ScalarConverter::convert(std::string &target){
	if (target.length() == 0)
		throw InvalidEntry();
	if (isSpecial(target)){
		std::cout << "is special\n" << target << '\n';/////////

		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: ";
		if (target == "nanf" || target == "-inff" || target == "+inff"){
			std::cout << target << '\n';
		}
		else{
			std::cout << target << "f" << '\n';
		}
		std::cout << "double: ";
		if (target == "nanf"){
			std::cout << "nan" << '\n';
		}
		else{
			std::cout << target << '\n';
		}
	}
	else if (isInt(target) == 1){
		std::cout << "is int\n";
		int i = atoi(target.c_str());

		/*print char*/
		char c = static_cast<char>(i);
		if (std::isprint(c) || std::isalpha(c))
			std::cout << "char: " << c << '\n';
		else
			std::cout << "char: Non displayable\n";

		/*print int*/
		std::cout << "int: " << i << '\n';

		/*print float*/
		std::cout << "float: " << static_cast<float>(i) << ".0f" <<'\n';
		
		/*print double*/
		std::cout << "double: " << static_cast<double>(i) << ".0" <<'\n';
		
	}
	else if (isChar(target) == 1){
		std::cout << "char: " << target << '\n';
		std::cout << "int: " << static_cast<int>(target[0]) << '\n';
		std::cout << "float: " << static_cast<float>(target[0]) << ".0f" <<'\n';
		std::cout << "double: " << static_cast<double>(target[0]) << ".0" <<'\n';
	}
	else if (isFloat(target) == 1){
		float i;
		std::istringstream iss(target);
		iss >> i;
		
		/*print char*/
		char c = static_cast<char>(i);
		if (std::isprint(c) || std::isalpha(c))
			std::cout << "char: " << c << '\n';
		else
			std::cout << "char: Non displayable\n";

		/*print int*/
		std::cout << "int: " << static_cast<int>(i) << '\n';

		/*print float*/
		std::cout << "float: " << i << "f" << '\n';

		/*print double*/
		if (i - static_cast<int>(i) == 0)
			std::cout << "double: " << static_cast<double>(i) << ".0" << '\n';
		else
		{
			std::cout << "double: " << static_cast<double>(i) << '\n';
		}
		
	}
	else if (isDouble(target) == 1){
		double i;
		std::istringstream iss(target);
		iss >> i;
		
		/*print char*/
		char c = static_cast<char>(i);
		if (std::isprint(c) || std::isalpha(c))
			std::cout << "char: " << static_cast<char>(i) << '\n';
		else
			std::cout << "char: Non displayable\n";

		/*print int*/
		std::cout << "int: " << static_cast<int>(i) << '\n';

		/*print float*/
		std::cout << "float: " << static_cast<float>(i) << "f" << '\n';

		/*print double*/
		if (i - static_cast<int>(i) == 0)
			std::cout << "double: " << i << ".0" << '\n';
		else
		{
			std::cout << "double: " << i << '\n';
		}
	}
	else{
		throw Impossible();
	}
}

