/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:41:58 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/19 18:41:59 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;


}

Brain::Brain(Brain &a)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = a;
}

Brain::~Brain()
{
	std::cout << "Brain deconstructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &a){
	std::cout << "Brain assignment operator called" << std::endl;
	
	for (int i = 0; i < 100; i++)
			this->ideas[i] = a.ideas[i];
	
	return *this;
}