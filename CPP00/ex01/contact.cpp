/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:18 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:55:19 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "addr.class.hpp"

Contacts::Contacts(){
}

Contacts::~Contacts(){}

std::string	Contacts::get_name(){
	return (this->_name);
}

std::string	Contacts::get_lastname(){
	return (this->_lastname);
}

std::string	Contacts::get_nickname(){
	return (this->_nickname);
}

std::string	Contacts::get_secret(){
	return (this->_secret);
}

std::string	Contacts::get_phone(){
	return (this->_phone);
}

void	Contacts::assign_index(int i){
	this->_index = i;
}