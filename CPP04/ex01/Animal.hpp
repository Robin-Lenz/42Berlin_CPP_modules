/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:49 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:27:49 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>
#include <iomanip>
#include <iostream>

class Animal
{
	private:
		/* data */

	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &a);
		Animal(std::string type);
		virtual ~Animal();

		Animal &operator=(const Animal &a);
		virtual void makeSound()const;
		std::string getType()const;
};


#endif