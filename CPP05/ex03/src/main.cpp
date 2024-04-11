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
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	abc = someRandomIntern.makeForm("ShrubberyCreationForm", "Earth");
	def = someRandomIntern.makeForm("PresidentialPardonForm", "Mars");

	vogone.signForm(*rrf);
	vogone.execute(*rrf);
	

	delete rrf;
	delete abc;
	delete def;
	return 0;
}
