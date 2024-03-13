#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongTsveto")
{
	std::cout << this->type << " is a beast (WrongAnimal default constructor)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = a;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "WrongAnimal constructor with string arg called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a){
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = a.type;
	return *this;
}

void WrongAnimal::makeSound()const{
	std::cout << this->getType() << " WrongArrrgh !" << std::endl;
}

std::string WrongAnimal::getType()const{
	return (this->type);
}