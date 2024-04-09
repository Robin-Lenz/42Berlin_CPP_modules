/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:52:18 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/09 16:48:00 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("42"){
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

void RobotomyRequestForm::execute(const Bureaucrat &executor)const{
	try{
		if (this->getSigned() == false)
			throw FormNotSigned();
		if (executor.getGrade() > this->getGradeExec())
			throw GradeTooLowException();
	}
	catch (std::exception &e){
		std::cout << executor.getName() << " couldn't execute this pardon because: " << e.what() << '\n';
		return ;
	}
	std::cout << "Brrrr Brr Brrrrrrrrr " << this->_target;
	
	srand(time(0));
	int tmp = rand();
	int FiftyFifty = tmp % 2;
	
	if (FiftyFifty == 0)
		std::cout << " has been robotomized !" << '\n';
	else{
		std::cout << "'s robotomisation failed tragically.. NEXT !" << '\n';
	}
}