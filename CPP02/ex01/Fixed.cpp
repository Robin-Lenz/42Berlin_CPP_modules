/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:57:56 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:58:25 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_num = 0;
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int a){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_num = (a << this->_num_fractional_bits);
}

Fixed::Fixed(const float a){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_num = (a * (1 << this->_num_fractional_bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &a){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(a.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &a){
	out << a.toFloat();
	return (out);
}

int Fixed::getRawBits(void)const{
	return(this->_fixed_num);
}

void Fixed::setRawBits(int const raw){
	this->_fixed_num = raw;
}

float Fixed::toFloat( void ) const{
	return(static_cast<float>(this->_fixed_num) / static_cast<float>(1 << _num_fractional_bits));
}

int Fixed::toInt( void ) const{
	return(this->_fixed_num >> _num_fractional_bits);
}