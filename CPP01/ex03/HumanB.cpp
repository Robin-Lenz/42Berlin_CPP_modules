/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:56:17 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:56:18 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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