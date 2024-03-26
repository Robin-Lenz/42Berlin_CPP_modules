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
	/*test copy constructor*/
	/*test << overload*/
	Form vogone;
	Form a(vogone);

	std::cout << vogone;
	std::cout << a << '\n';

	/*test grade too high*/
	try{
		Form b("Verwaltungsaufwandsentscheadigungszahlungsbeleg", 50, 70);
		std::cout << b << '\n';
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}

	// /*test grade to low*/
	// try{
	// 	Bureaucrat a(0);
	// }
	// catch(std::invalid_argument &e){
	// 	std::cout << e.what() << std::endl;
	// }

	// /*test grade ok*/
	// try{
	// 	Bureaucrat a(149);
	// }
	// catch(std::invalid_argument &e){
	// 	std::cout << e.what() << std::endl;
	// }

	/*test incrementing grade*/
	// Bureaucrat test;
	// for (int i = 0; i < 150 ;i++){
	// 	try
	// 	{
	// 		test.increment();
	// 	}
	// 	catch(const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }

	/*test decrement grade*/
	// Bureaucrat test("Vogone",1);
	// for (int i = 0; i < 150 ;i++){
	// 	try
	// 	{
	// 		test.decrement();
	// 	}
	// 	catch(const std::exception &e)
	// 	{
	// 		std::cerr << e.what() << '\n';
	// 	}
	// }
	return 0;
}

//throw exceptions for form
// beSigned und folgende