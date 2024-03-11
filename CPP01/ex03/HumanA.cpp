/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:56:11 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:56:12 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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