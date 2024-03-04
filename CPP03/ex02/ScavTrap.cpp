#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Inge")
{
	std::cout << "ScavTrap  default constructor called Inge" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called " << name << std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor called " << this->_name << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target){
	if (this->_hitpoints > 0){
		if (this->_energy > 0)
		{
			std::cout << "ScavTrap " << this->_name << " attacks " << target << \
			", causing " << this->_damage << " points of damage!" << std::endl;

			this->_energy--;
		}
		else
			std::cout << "ScavTrap " << this->_name << " has not enough energy to attack " << \
			target << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " has lost all his hitpoints" << std::endl;
}
