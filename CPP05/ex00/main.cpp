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

	try{
		Bureaucrat a(0);
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}