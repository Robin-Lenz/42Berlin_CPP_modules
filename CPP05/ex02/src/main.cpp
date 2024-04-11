/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:26 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/11 18:37:00 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	Bureaucrat vogone("vogone", 5);
	
	RobotomyRequestForm c;
	ShrubberyCreationForm d;
	PresidentialPardonForm f;
	
	std::cout << vogone;
	
	vogone.signForm(c);
	vogone.execute(c);

	vogone.signForm(d);
	vogone.execute(d);

	vogone.signForm(f);
	vogone.execute(f);

	return 0;
}
