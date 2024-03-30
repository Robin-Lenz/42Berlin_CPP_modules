#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
// #include <iostream>

class PresidentialPardonForm {
	private:
		const std::string _name;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &a);
		PresidentialPardonForm(int value);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &a);

		std::string getName() const;
};

PresidentialPardonForm::PresidentialPardonForm(){
	
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a){
	
};

PresidentialPardonForm::PresidentialPardonForm(int value){
	
};

PresidentialPardonForm::~PresidentialPardonForm(){
	
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &a){
	
};


#endif