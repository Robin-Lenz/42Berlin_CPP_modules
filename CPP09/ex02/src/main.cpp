/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-01 20:21:58 by robin             #+#    #+#             */
/*   Updated: 2024-06-01 20:21:58 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
	if (ac < 2){
		std::cerr << "Error: provide a sequenz of integers\n";
		return(-1);
	}


	try
	{
		//validate input
		PmergeMe seq(av);
		//algorithm
		//print
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return(0);
}