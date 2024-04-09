/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:04:25 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/09 19:54:04 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern Deconstructor called" << std::endl;
}

Intern::Intern(const Intern &a)
{
	std::cout << "Intern Copy Constructor called" << std::endl;
	*this = a;
}

Intern &Intern::operator=(const Intern &a)
{
	(void)a;
	std::cout << "Intern Assignation operator called" << std::endl;
	return *this;
}

AForm *makeRobotomy(const std::string target){
	return (new RobotomyRequestForm(target));
}

AForm *makeShrubbery(const std::string target){
	return (new ShrubberyCreationForm(target));
}

AForm *makePresident(const std::string target){
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target){
	AForm *(*forms[])(const std::string target) = {
		&makeRobotomy,
		&makeShrubbery,
		&makePresident
	};
	
	std::string args[3];
	args[0] = "RobotomyRequestForm";
	args[1] = "ShrubberyCreationForm";
	args[2] = "PresidentialPardonForm";

	for (int i = 0; i < 3; i++){
		if (args[i] == name){
			std::cout << "Intern creates " << args[i] << '\n';
			return (forms[i](target));
		}
	}
	return NULL;
}
