/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:01:02 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/06 19:11:02 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Helper.hpp"

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
	double d_err;
	std::istringstream iss(target);
	iss >> d_err;
	
	if (target.length() == 0)
		throw InvalidEntry();
	if (isMixed(target) == 1){
		throw Impossible();
	}
	if (isSpecial(target)){
		std::cout << "is special\n";
		HandleSpecial(target);
	}
	else if (isInt(target) == 1){
		std::cout << "is int\n";
			HandleInt(target, d_err);
	}
	else if (isChar(target) == 1){
		std::cout << "is char\n";
			HandleChar(target);
	}
	else if (isFloat(target) == 1){
		std::cout << "is Float\n";
		HandleFloat(target, d_err);
	}
	else if (isDouble(target) == 1){
		std::cout << "is double \n";
		HandleDouble(target, d_err);
	}
	else{
		throw Impossible();
	}
}
