/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:52:18 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/30 19:57:36 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45){
	std::cout << "RobotomyRequestForm default constructor called" << '\n';
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) : AForm(a), _target(a._target){
	std::cout << "RobotomyRequestForm copy constructor called" << '\n';
	*this = a;
};

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("Robotomy Request Form", 72, 45), _target(target){
	std::cout << "RobotomyRequestForm arg constructor called" << '\n';
};

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm deconstructor called" << '\n';
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &a){
	if (this == &a)
		return *this;
	this->_target = a._target;
	return *this;
};
