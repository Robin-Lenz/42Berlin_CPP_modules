#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed(const Fixed &a){
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(a.getRawBits());
}

Fixed::Fixed(const int a){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(a);
	this->_fixed_num = a & ((1 << _num_fractional_bits) - 1);
}

Fixed::Fixed(const float a){
	std::cout << "Float constructor called" << std::endl;
	
}

Fixed::~Fixed(){
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