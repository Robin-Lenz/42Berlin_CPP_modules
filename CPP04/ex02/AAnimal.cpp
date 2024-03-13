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

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Tsveto")
{
	std::cout << this->type << " is a beast (AAnimal default constructor)" << std::endl;
}

AAnimal::AAnimal(const AAnimal &a)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = a;
}

AAnimal::AAnimal(std::string type) : type(type)
{
	std::cout << "AAnimal constructor with string arg called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &a){
	std::cout << "AAnimal assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

void AAnimal::makeSound()const{
	std::cout << this->getType() << " Arrrgh !" << std::endl;
}

std::string AAnimal::getType()const{
	return (this->type);
}