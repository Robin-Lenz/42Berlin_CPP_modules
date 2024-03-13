/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:00:04 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:00:51 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_DogBrain;
	public:
		Dog();
		Dog(Dog &a);
		~Dog();

		Dog &operator=(const Dog &a);

		void makeSound()const;
};



#endif