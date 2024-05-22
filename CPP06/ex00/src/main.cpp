/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:00:58 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/06 19:25:27 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Helper.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Invalid entry\n";
		return (1);
	}
	std::string a = av[1];
	try{
		ScalarConverter::convert(a);
	}
	catch (const std::exception &e){
		std::cerr << e.what();
	}
	return 0;
}

bool isChar(const std::string &target){
	if (target.length() != 1)
		return 0;
	if ((std::isprint(target[0]) || std::isalpha(target[0])))
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

bool isFloat(const std::string &target){
	if (target[target.length() - 1] != 'f')
		return 0;
	return 1;
}

bool isDouble(const std::string &target){
	size_t pos = target.find('.');
	if (pos && pos != std::string::npos)
		return 1;
	return 0;
}

bool isSpecial(std::string const &target){
	return (target == "nan" || target == "nanf" || target == "-inff" || target == "+inff" || target == "-inf" || target == "+inf");
}

bool isMixed(std::string const &target){
	int letter = 0;
	bool digit = false;
	int len = target.size();

	for (int i = 0; target[i] == '-' || target[i] == '+' || target[i] == ' '; i++){
		if (i >= 1)
			return 1;
	}
	for (int i = 0; i < len; i++){
		if (std::isdigit(target[i])){
			digit = true;
		}
		else if (std::isalpha(target[i])){
			letter++;
		}
	}
	if (letter == 1 && target[len - 1] == 'f'){
		letter = 0;
	}
	if (letter != 0 && digit)
		return 1;
	return 0;
}

void HandleChar(std::string &target){
	std::cout << "char: " << target << '\n';
	std::cout << "int: " << static_cast<int>(target[0]) << '\n';
	std::cout << "float: " << static_cast<float>(target[0]) << ".0f" <<'\n';
	std::cout << "double: " << static_cast<double>(target[0]) << ".0" <<'\n';
}

void HandleInt(std::string &target, double d_err){
	int i;
	std::istringstream iss(target);
	iss >> i;

	if (d_err < -std::numeric_limits<int>::max() || d_err < std::numeric_limits<int>::max()){
		PrintChar(i);
		PrintInt(i, d_err);
		PrintFloat(static_cast<float>(i), d_err);
		PrintDouble(i);
	}
	else{
		throw ScalarConverter::Impossible();
	}
}

void HandleFloat(std::string &target, double d_err){
	float i;
	std::istringstream iss(target);
	iss >> i;

	if (d_err < -std::numeric_limits<float>::max() || d_err < std::numeric_limits<float>::max()){
		PrintChar(i);
		PrintInt(i, d_err);
		PrintFloat(static_cast<float>(i), d_err);
		PrintDouble(i);
	}
	else{
		throw ScalarConverter::Impossible();
	}
}

void HandleDouble(std::string &target, double d_err){
	double i;
	std::istringstream iss(target);
	iss >> i;

		PrintChar(i);
		PrintInt(static_cast<int>(i), d_err);
		PrintFloat(static_cast<float>(i), d_err);
		PrintDouble(i);
}

void HandleSpecial(std::string &target){
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