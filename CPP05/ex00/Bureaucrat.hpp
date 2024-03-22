/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:25:23 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/20 15:30:05 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Bureaucrat(int grade);
		Bureaucrat(cost Bureaucrat &a);
		~Bureaucrat();


		Bureaucrat &operator=(const Bureaucrat &a);

		std::string getName()const;
		int getGrade()const;

		void increment();
		void decrement();

};



#endif