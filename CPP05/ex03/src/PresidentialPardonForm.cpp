/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 19:47:49 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/11 18:06:26 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("42"){
	std::cout << "PresidentialPardonForm default constructor called" << '\n';
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a) : AForm(a), _target(a._target){
	std::cout << "PresidentialPardonForm copy constructor called" << '\n';
	*this = a;
};

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
	std::cout << "PresidentialPardonForm arg constructor called" << '\n';
};

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm deconstructor called" << '\n';
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a){
	if (this == &a)
		return *this;
	this->_target = a._target;
	return *this;
};

void PresidentialPardonForm::execute(const Bureaucrat &executor)const{
	if (this->getSigned() == false)
		throw FormNotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << '\n';
}