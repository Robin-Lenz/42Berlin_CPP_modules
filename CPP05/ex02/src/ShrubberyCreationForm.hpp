#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &a);
		ShrubberyCreationForm(const std::string &target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &a);

		void execute(const Bureaucrat &executor)const;

};

#endif