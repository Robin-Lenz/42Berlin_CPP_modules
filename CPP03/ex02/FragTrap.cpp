#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Hilma")
{
	std::cout << "FragTrap  default constructor called Hilma" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_damage = 30;
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = a;
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

FragTrap &FragTrap::operator=(const FragTrap &a)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	this->_name = a._name;
    this->_hitpoints = a._hitpoints;
    this->_energy = a._energy;
    this->_damage = a._damage;
	return *this;
}

void FragTrap::highFivesGuys(void){
	std::cout << "High five approved by " << this->_name << std::endl;
}