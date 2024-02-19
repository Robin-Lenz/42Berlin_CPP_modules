#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	return ;
}

HumanB::~HumanB(){
}

void	HumanB::attack(){
		std::cout << this->_name << " attacks with their " << this->_knife->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_knife = &weapon;
}