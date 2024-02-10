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