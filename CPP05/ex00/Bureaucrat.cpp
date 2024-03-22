/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:20 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/20 15:54:12 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade){
	std::cout << "Bureaucrat constructor called with arguement int" << std::endl;
	try{
		if (grade < 1 || grade > 150)
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}