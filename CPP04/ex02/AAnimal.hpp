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

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <string>
#include <iomanip>
#include <iostream>

class AAnimal
{
	private:
		/* data */

	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &a);
		AAnimal(std::string type);
		virtual ~AAnimal();

		AAnimal &operator=(const AAnimal &a);
		virtual void makeSound()const = 0;
		std::string getType()const;
};


#endif