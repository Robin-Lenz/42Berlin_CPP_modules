/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:23 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/24 18:57:26 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(/* args */);
		Bureaucrat(int grade);
		Bureaucrat(const Bureaucrat &a);
		~Bureaucrat();


		Bureaucrat &operator=(const Bureaucrat &a);


		class GradeTooHighException : public std::invalid_argument
		{
			public:
			
				GradeTooHighException();
				GradeTooLowException();
		}

		std::string getName()const;
		int getGrade()const;

		void increment();
		void decrement();

};



#endif