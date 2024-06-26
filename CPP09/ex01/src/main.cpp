/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-05-30 15:31:03 by robin             #+#    #+#             */
/*   Updated: 2024-05-30 15:31:03 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cerr << "Error: use ./RPN 'polish mathematical expression'\n";
	}
	RPN rpn;

	try
	{
		rpn.polishExpression(av[1]);
		std::cout << rpn.getResult() << '\n';
	}
	catch( RPN::Error& e)
	{
		std::cerr << e.what() << '\n';
	}

	return(0);
}