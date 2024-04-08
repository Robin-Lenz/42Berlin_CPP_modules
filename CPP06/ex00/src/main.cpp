/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:00:58 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/08 18:24:41 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << "enter one argument\n";
		return 1;
	}
	std::string a = av[1];
	ScalarConverter::convert(a);
	return 0;
}

bool isChar(const std::string &target){
	//nanf ...
	
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