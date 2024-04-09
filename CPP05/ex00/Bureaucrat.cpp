/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:20 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/09 16:46:47 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() : invalid_argument("Default Exception"){}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *msg) : invalid_argument(msg){}

Bureaucrat::GradeTooLowException::GradeTooLowException() : invalid_argument("Default Exception"){}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *msg) : invalid_argument(msg){}



Bureaucrat::Bureaucrat() : _name("Ingo"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : _name(a._name), _grade(a._grade){
	std::cout << "copyconstructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	std::cout << "Bureaucrat constructor called with arguement int" << std::endl;
	if (grade > 150){
		throw GradeTooLowException("Grade too low");
	}
	else if (grade < 1){
		throw GradeTooHighException("Grade too high");
	}
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a){
	this->_grade = a._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &a){
	o << a.getName() << " has grade " << a.getGrade() << std::endl;
	return o;
}


std::string Bureaucrat::getName()const{
	return this->_name;
}

int Bureaucrat::getGrade()const{
	return this->_grade;
}

void Bureaucrat::increment(){
	if (_grade <= 1)
		throw GradeTooHighException(" grade can't get any higher");
	this->_grade--;
}

void Bureaucrat::decrement(){
	if (_grade >= 150)
		throw GradeTooLowException(" grade can't get lower than that");
	this->_grade++;
}