#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType(){
	const std::string &str = this->_type;
	return (str);
}

void	Weapon::setType(std::string type){
	this->_type = type;
}