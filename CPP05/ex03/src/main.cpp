/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:26 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/09 19:42:30 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
	
	Intern someRandomIntern;
	AForm *rrf;
	AForm *abc;
	AForm *def;
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	abc = someRandomIntern.makeForm("ShrubberyCreationForm", "Earth");
	def = someRandomIntern.makeForm("PresidentialPardonForm", "Mars");

	delete rrf;
	delete abc;
	delete def;
	return 0;
}
