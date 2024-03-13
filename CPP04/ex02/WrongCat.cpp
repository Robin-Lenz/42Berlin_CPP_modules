#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal(a.type)
{
	std::cout << "WrongCat copyconstructor called" << std::endl;
	*this = a;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a){
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

void WrongCat::makeSound()const{
	std::cout << this->getType() << "Wrong Meow !" << std::endl;
}

