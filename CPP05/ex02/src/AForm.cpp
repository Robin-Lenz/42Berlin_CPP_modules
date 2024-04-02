#include "AForm.hpp"

const char *AForm::GradeTooLowException::what()const throw(){
	return " Grade too low";
}

const char *AForm::GradeTooHighException::what()const throw(){
	return " Grade too high";
}

const char *AForm::FormNotSigned::what()const throw(){
	return " Form not signed";
}

AForm::AForm() : _name("Wohnungsgeberbescheinigung") , _signed(false) , _gradeSign(100) , _gradeExec(5){
	std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(const AForm &a) : _name(a._name), _signed(a._signed), _gradeSign(a._gradeSign), _gradeExec(a._gradeExec){
	std::cout << "Form copy constructor called" << '\n';
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec){
	std::cout << "Form constructor with args called" << std::endl;
}

AForm::~AForm()
{
	std::cout << "Form destructor called" << '\n';
}

AForm &AForm::operator=(const AForm &a){
	if (this == &a)
		return *this;
	this->_signed = a._signed;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const AForm &a){
	o << a.getName() << '\n' << a.getGradeSign() << '\n' \
	<< a.getGradeExec() << '\n';
	return o;
}

std::string AForm::getName()const{
	return this->_name;
}

int AForm::getGradeSign()const{
	return this->_gradeSign;
}

int AForm::getGradeExec()const{
	return this->_gradeExec;
}

bool AForm::getSigned()const{
	return this->_signed;
}

void AForm::beSigned(const Bureaucrat &a){
	if (a.getGrade() > this->getGradeSign())
		throw AForm::GradeTooLowException();
	this->_signed = true;
}