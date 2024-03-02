#include "Fixed.hpp"

Fixed::Fixed(){
	this->_fixed_num = 0;
}

Fixed::Fixed(const Fixed &a){
	*this = a;
}

Fixed::Fixed(const int a){
	this->_fixed_num = (a << this->_num_fractional_bits);
}

Fixed::Fixed(const float a){
	this->_fixed_num = (a * (1 << this->_num_fractional_bits));
}

Fixed::~Fixed(){
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

Fixed &Fixed::operator=(const Fixed &a){
	this->setRawBits(a.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &a){
	out << a.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &a)const{
	return(this->toFloat() > a.toFloat());
}

bool Fixed::operator<(const Fixed &a)const{
	return(this->toFloat() < a.toFloat());
}

bool Fixed::operator>=(const Fixed &a)const{
	return(this->toFloat() >= a.toFloat());
}

bool Fixed::operator<=(const Fixed &a)const{
	return(this->toFloat() <= a.toFloat());
}

bool Fixed::operator==(const Fixed &a)const{
	return(this->toFloat() == a.toFloat());
}

bool Fixed::operator!=(const Fixed &a)const{
	return(this->toFloat() != a.toFloat());
}

float Fixed::operator+(const Fixed &a)const{
	return(this->toFloat() + a.toFloat());
}

float Fixed::operator-(const Fixed &a)const{
	return(this->toFloat() - a.toFloat());
}

float Fixed::operator*(const Fixed &a)const{
	return(this->toFloat() * a.toFloat());
}

float Fixed::operator/(const Fixed &a)const{
	return(this->toFloat() / a.toFloat());
}

Fixed &Fixed::operator++(){
	this->_fixed_num++;
	return(*this);
}

Fixed &Fixed::operator--(){
	this->_fixed_num--;
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed tmp = *this;
	this->_fixed_num++;
	return(tmp);
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->_fixed_num--;
	return(tmp);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b){
	if (b > a)
		return(a);
	return(b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	if (b > a)
		return(a);
	return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	if (a > b)
		return(a);
	return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
	if (a > b)
		return(a);
	return(b);
}
