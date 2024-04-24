/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:03:15 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/09 19:48:22 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern &a);
		~Intern();
	
		Intern &operator=(const Intern &a);
	
		AForm *makeForm(std::string name, std::string target);
		class FormDoesntExist : public std::exception
		{
			public:
				const char *what()const throw();
		};
};


#endif