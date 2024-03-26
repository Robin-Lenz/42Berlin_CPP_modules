#include "Bureaucrat.hpp"

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
		
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what();
	};
		std::string getName()const;
		int getGradeSign()const;
		int getGradeExec()const;

};

std::ostream &operator<<(std::ostream &o, const Form &a);
