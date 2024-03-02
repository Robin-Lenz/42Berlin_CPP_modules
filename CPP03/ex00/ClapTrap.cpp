#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energy(0), _damage(0){
	std::cout << "constructor called " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", cuasing " << \
	this->_damage << " points of damage!" << std::endl;

	this->_energy--;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->_name << " lost " << amount << " hitpoints" << std::endl;
	this->_hitpoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	this->_hitpoints += amount;
	this->_energy--;
}

int ClapTrap::GetDamage(){
	return(this->_damage);
}

std::string ClapTrap::GetName(){
	return(this->_name);
}