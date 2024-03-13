/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:00:01 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:13:44 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	_DogBrain = new Brain();
}

Dog::Dog(Dog &a) : Animal(a.type)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = a;
	this->_DogBrain = new Brain(*a._DogBrain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _DogBrain;
}

Dog &Dog::operator=(const Dog &a){
	std::cout << "Dog assignment operatot called" << std::endl;
	this->type = a.type;
	return *this;
}

void Dog::makeSound()const{
	std::cout << this->getType() << " Wau !" << std::endl;
}