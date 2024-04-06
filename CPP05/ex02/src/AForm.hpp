/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:44:55 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/06 17:44:56 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			virtual const char *what()const throw();
	};

	class FormNotSigned : public std::exception
	{
		public:
			const char *what()const throw();
	};

		std::string getName()const;
		int getGradeSign()const;
		int getGradeExec()const;
		bool getSigned()const;
		void beSigned(const Bureaucrat &a);
		virtual void execute(const Bureaucrat &executor) const = 0;
};

std::ostream &operator<<(std::ostream &o, const AForm &a);


#endif