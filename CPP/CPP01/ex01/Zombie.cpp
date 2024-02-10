#include "Zombie.hpp"

Zombie::Zombie(){
	return;
}

Zombie::~Zombie(){
	return;
}

void Zombie::announce( void ){
	std::cout << this->_name << ": Moar BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::getnamed(std::string nm){
	this->_name = nm;
	return;
}