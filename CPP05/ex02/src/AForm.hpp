#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		AForm();
		AForm(const AForm &a);
		AForm(std::string name, int gradeSign, int gradeExec);
		virtual ~AForm();

		AForm &operator=(const AForm &a);
		
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what()const throw();
	};

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what()const throw();
	};

		std::string getName()const;
		int getGradeSign()const;
		int getGradeExec()const;
		void beSigned(const Bureaucrat &a);
};

std::ostream &operator<<(std::ostream &o, const AForm &a);

#endif