/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:44 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 18:39:16 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Tsveto")
{
	std::cout << this->type << " is a beast (Animal default constructor)" << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &a){
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

void Animal::makeSound(){
	int i = 0;
	void (Animal::*functions[]) (void) = {
		&Animal::Meow	
	};

	std::string args[3];
	args[0] = "Meow !";
	args[1] = 
}