/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:54 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:26:09 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &a)
{
	std::cout << "Cat copyconstructor called" << std::endl;
	*this = a;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &a){
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

void Cat::Meow(){
	std::cout << "Meow !" << std::endl;
}