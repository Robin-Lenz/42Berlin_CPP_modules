/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:58 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:27:42 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_CatBrain;
	public:
		Cat();
		Cat(const Cat &a);
		~Cat();
	
		Cat &operator=(const Cat &a);

		void makeSound()const;
};




#endif