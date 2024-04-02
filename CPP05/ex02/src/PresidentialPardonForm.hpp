#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &a);
		PresidentialPardonForm(const std::string &target);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &a);

		void execute(const Bureaucrat &executor)const;
};


#endif