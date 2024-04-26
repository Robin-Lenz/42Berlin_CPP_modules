/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:00:58 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/26 18:37:29 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2){
		throw ScalarConverter::InvalidEntry();
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

bool isSpecial(std::string const &val){
	return (val == "nan" || val == "nanf" || val == "-inff" || val == "+inff" || val == "-inf" || val == "+inf");
}

void HandleChar(std::string &target){
	std::cout << "char: " << target << '\n';
	std::cout << "int: " << static_cast<int>(target[0]) << '\n';
	std::cout << "float: " << static_cast<float>(target[0]) << ".0f" <<'\n';
	std::cout << "double: " << static_cast<double>(target[0]) << ".0" <<'\n';
}