/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:45:07 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/06 17:45:08 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib> // For rand() and srand()

class AForm;

class RobotomyRequestForm : public AForm{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &a);
		RobotomyRequestForm(const std::string &target);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(const RobotomyRequestForm &a);

		void execute(const Bureaucrat &executor)const;

};

#endif