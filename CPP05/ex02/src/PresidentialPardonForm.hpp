/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:45:02 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/06 17:45:03 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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