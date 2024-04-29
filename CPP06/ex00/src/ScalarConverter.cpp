/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:01:02 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/26 18:39:41 by rpodack          ###   ########.fr       */
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
		std::cout << "is special\n";
		HandleSpecial(target);
	}
	else if (isInt(target) == 1){
		std::cout << "is int\n";
		HandleInt(target);
	}
	else if (isChar(target) == 1){
		std::cout << "is char\n";
		HandleChar(target);
	}
	else if (isFloat(target) == 1){
		std::cout << "is Float\n";
		HandleFloat(target);
	}
	else if (isDouble(target) == 1){
		std::cout << "is double \n";
		HandleDouble(target);
	}
	else{
		throw Impossible();
	}
}

