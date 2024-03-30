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

int main(){
		Bureaucrat vogone("vogone", 80);
	
	/*test copy constructor*/
	/*test << overload*/
	AForm z;
	AForm a(z);
	RobotomyRequestForm c;

	std::cout << vogone;
	std::cout << a << '\n';

	/*test grade too low*/
	try{
														/*int gradeSign, int gradeExec*/
		AForm b("Verwaltungsaufwandsentscheadigungszahlungsbeleg", 50, 70);
		std::cout << b << '\n';
		vogone.signForm(b);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	/*can vogone sign a RobotomyRequestForm ?*/
	std::cout << vogone.getName();
	try{
		c.beSigned(vogone);	
		std::cout << " signed " << c.getName() << '\n';
	}
	catch (std::exception &e){
		std::cout << " couldn't sign " << c.getName() << " because " << e.what() << '\n';
	}

	
	return 0;
}
