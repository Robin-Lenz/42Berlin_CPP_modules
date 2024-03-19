/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:40:27 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/19 18:40:28 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <string>
#include <iomanip>
#include <iostream>

class WrongAnimal
{
	private:
		/* data */

	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal(std::string type);
		~WrongAnimal();

		WrongAnimal &operator=(const WrongAnimal &a);
		void makeSound()const;
		std::string getType()const;
};


#endif