#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _gun(club){
	return ;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(){
	std::cout << this->_name << " attacks with their " << this->_gun.getType() << std::endl;
}