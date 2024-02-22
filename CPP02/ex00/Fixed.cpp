#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed(Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void)const{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->_num);
}

void Fixed::setRawBits(int const raw){
	this->_num = raw;
}

Fixed &Fixed::operator=(const Fixed &a){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(a.getRawBits());
	return *this;
}