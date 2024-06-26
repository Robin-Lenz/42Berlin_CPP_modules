#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		Form();
		Form(const Form &a);
		Form(std::string name, int gradeSign, int gradeExec);
		~Form();

		Form &operator=(const Form &a);
		
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

std::ostream &operator<<(std::ostream &o, const Form &a);

#endif