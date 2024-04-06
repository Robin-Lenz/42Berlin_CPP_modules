/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:26 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/06 19:18:24 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
	Bureaucrat vogone("vogone", 5);
	
	// RobotomyRequestForm c;
	ShrubberyCreationForm d;
	PresidentialPardonForm f;

	std::cout << vogone;

	// /*can vogone sign a RobotomyRequestForm ?*/
	// std::cout << vogone.getName();
	// try{
	// 	c.beSigned(vogone);	
	// 	std::cout << " signed " << c.getName() << '\n';
	// }
	// catch (std::exception &e){
	// 	std::cout << " couldn't sign " << c.getName() << " because " << e.what() << '\n';
	// }
	// c.execute(vogone);

	/*can vogone sign a ShrubberyCreationForm ?*/
	std::cout << vogone.getName();
	try{
		d.beSigned(vogone);	
		std::cout << " signed " << d.getName() << '\n';
	}
	catch (std::exception &e){
		std::cout << " couldn't sign " << d.getName() << " because " << e.what() << '\n';
	}
	d.execute(vogone);

	/*can vogone sign a PresidentialPardonForm ?*/
	std::cout << vogone.getName();
	try{
		f.beSigned(vogone);	
		std::cout << " signed " << f.getName() << '\n';
	}
	catch (std::exception &e){
		std::cout << " couldn't sign " << f.getName() << " because " << e.what() << '\n';
	}
	f.execute(vogone);


	
	return 0;
}
