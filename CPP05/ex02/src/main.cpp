/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:26 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/24 18:39:37 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat vogone;
	
	/*test copy constructor*/
	/*test << overload*/
	AForm z;
	AForm a(z);

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
	return 0;
}
