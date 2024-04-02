/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:26 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/30 20:07:41 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
		Bureaucrat vogone("vogone", 120);
	
	/*test copy constructor*/
	/*test << overload*/
	// AForm z;
	// AForm a(z);
	RobotomyRequestForm c;
	ShrubberyCreationForm d;

	std::cout << vogone;

	/*can vogone sign a RobotomyRequestForm ?*/
	std::cout << vogone.getName();
	try{
		c.beSigned(vogone);	
		std::cout << " signed " << c.getName() << '\n';
	}
	catch (std::exception &e){
		std::cout << " couldn't sign " << c.getName() << " because " << e.what() << '\n';
	}

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


	
	return 0;
}
