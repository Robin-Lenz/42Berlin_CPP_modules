/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:53 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:55:54 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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