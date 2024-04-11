/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:23 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/11 16:55:29 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &a);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &a);

		class GradeTooHighException : public std::invalid_argument
		{
			public:
				GradeTooHighException();
				GradeTooHighException(const char *msg);
		};
		class GradeTooLowException : public std::invalid_argument
		{
			public:
				GradeTooLowException();
				GradeTooLowException(const char *msg);
		};

		std::string getName()const;
		int getGrade()const;

		void increment();
		void decrement();

		void signForm(AForm &form);

		void execute(AForm const & form);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &a);


#endif