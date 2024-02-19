#include "Zombie.hpp"

Zombie::Zombie(std::string nm) : _name(nm), tmp(_name){
	this->announce();
	return;
}

Zombie::~Zombie(){
	std::cout << this->_name << std::endl;
	return;
}