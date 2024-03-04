#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energy(10), _damage(0){
	std::cout << "ClapTrap constructor called " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor called " << this->_name << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->_hitpoints > 0){
		if (this->_energy > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target << \
			", causing " << this->_damage << " points of damage!" << std::endl;

			this->_energy--;
		}
		else
			std::cout << this->_name << " has not enough energy to attack " << \
			target << std::endl;
	}
	else
		std::cout << this->_name << " has lost all his hitpoints" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->_name << " lost " << amount << " hitpoints" << std::endl;
	this->_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_hitpoints > 0){
		if (this->_energy > 0)
		{
			std::cout << "ClapTrap " << this->_name << " heals himself and regained "\
			 << amount << " hitpoints!" << std::endl;

			this->_hitpoints += amount;
			this->_energy--;
		}
		else
			std::cout << this->_name << " has not enough energy to heal himself "\
			 << std::endl; 
	}
	else
		std::cout << this->_name << " has lost all his hitpoints" << std::endl;
}

int ClapTrap::GetDamage(){
	return(this->_damage);
}

std::string ClapTrap::GetName(){
	return(this->_name);
}