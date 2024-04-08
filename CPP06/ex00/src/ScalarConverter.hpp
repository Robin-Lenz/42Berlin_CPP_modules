/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:01:07 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/08 18:01:08 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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