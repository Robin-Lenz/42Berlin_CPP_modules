/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:42 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:55:43 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nm) : _name(nm), tmp(_name){
	this->announce();
	return;
}

Zombie::~Zombie(){
	std::cout << this->_name << std::endl;
	return;
}