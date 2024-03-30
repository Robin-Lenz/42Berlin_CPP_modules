/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:53:24 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/30 19:53:43 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation Form", 145, 137){
	std::cout << "ShrubberyCreationForm default constructor called" << '\n';
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) : AForm(a), _target(a._target){
	std::cout << "ShrubberyCreationForm copy constructor called" << '\n';
	*this = a;
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm arg constructor called" << '\n';
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm deconstructor called" << '\n';
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a){
	if (this == &a)
		return *this;
	this->_target = a._target;
	return *this;
};