/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:58:47 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:58:48 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Defaultname"), _hitpoints(10), _energy(10), _damage(0){
	std::cout << "ClapTrap default constructor called " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a){
	*this = a;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a){
	
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	this->_damage = a._damage;
	this->_energy = a._energy;
	this->_hitpoints = a._hitpoints;
	this->_name = a._name;
	return *this;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitpoints(10), _energy(10), _damage(0){
	std::cout << "ClapTrap constructor called " << this->_name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->_hitpoints > 0){
		if (this->_energy > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target << \
			", cuasing " << this->_damage << " points of damage!" << std::endl;

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

