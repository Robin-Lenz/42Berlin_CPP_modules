#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Hilma")
{
	std::cout << "FragTrap  default constructor called Hilma" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap copy constructor called " << this->_name << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap deconstructor called " << this->_name << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "High five approved by " << this->_name << std::endl;
}