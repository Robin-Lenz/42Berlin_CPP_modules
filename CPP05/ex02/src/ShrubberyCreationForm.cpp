#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){
	std::cout << "ShrubberyCreationForm default constructor called" << '\n';
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) : AForm(a), _target(a._target){
	std::cout << "ShrubberyCreationForm copy constructor called" << '\n';
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation Form", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm arg constructor called" << '\n';
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::string << "ShrubberyCreationForm deconstructor called" << '\n';
};

// ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a){
	
// }