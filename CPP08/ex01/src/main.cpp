/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:25:32 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/22 18:25:33 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
	int len = 100000;
	Span sp = Span(len);
	try
	{
		// sp.addManyNumbers(5, 150000);


		// srand(static_cast<unsigned int>(time(NULL)));
		// for (int i = 0; i < len; i++)
		// {
		// 	int random = rand() % 100;
		// 	sp.addNumber(random);
		// }

		sp.addNumber(-2147483646);
		sp.addNumber(2147483646);
		// sp.addNumber(9);
		// sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	
	return 0;
}