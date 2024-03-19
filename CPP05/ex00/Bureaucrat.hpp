#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string.hpp>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(/* args */);
		Bureaucrat(cost Bureaucrat &a);
		~Bureaucrat();


		Bureaucrat &operator=(const Bureaucrat &a);

		std::string getName()const;
		int getGrade()const;

		void increment();
		void decrement();

};



#endif