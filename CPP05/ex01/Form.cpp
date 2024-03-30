#include "Bureaucrat.hpp"

const char *Form::GradeTooLowException::what()const throw(){
	return " Grade too low";
}

const char *Form::GradeTooHighException::what()const throw(){
	return " Grade too high";
}

Form::Form() : _name("Wohnungsgeberbescheinigung") , _signed(false) , _gradeSign(100) , _gradeExec(5){
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &a) : _name(a._name), _signed(a._signed), _gradeSign(a._gradeSign), _gradeExec(a._gradeExec){
	std::cout << "Form copy constructor called" << '\n';
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec){
	std::cout << "Form constructor with args called" << std::endl;
}

Form::~Form()
{
	std::cout << "Form destructor called" << '\n';
}

Form &Form::operator=(const Form &a){
	if (this == &a)
		return *this;
	this->_signed = a._signed;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Form &a){
	o << a.getName() << '\n' << a.getGradeSign() << '\n' \
	<< a.getGradeExec() << '\n';
	return o;
}

std::string Form::getName()const{
	return this->_name;
}

int Form::getGradeSign()const{
	return this->_gradeSign;
}

int Form::getGradeExec()const{
	return this->_gradeExec;
}

void Form::beSigned(const Bureaucrat &a){
	if (a.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	this->_signed = true;
}