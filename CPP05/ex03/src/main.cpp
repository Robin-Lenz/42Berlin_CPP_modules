/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:26 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/11 18:43:39 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
	
	Bureaucrat vogone("vogone", 5);

	Intern someRandomIntern;
	AForm *rrf;
	AForm *abc;
	AForm *def;

	try
	{
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (-1);
	}

	try
	{
		abc = someRandomIntern.makeForm("ShrubberyCreationForm", "Earth");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete rrf;
		return (-1);
	}

	try
	{
		def = someRandomIntern.makeForm("PresidentialPardonForm", "Mars");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete rrf;
		delete abc;
		return (-1);
	}

	vogone.signForm(*rrf);
	vogone.execute(*rrf);

	vogone.signForm(*abc);
	vogone.execute(*abc);

	vogone.signForm(*def);
	vogone.execute(*def);
	

	delete rrf;
	delete abc;
	delete def;
	return 0;
}
