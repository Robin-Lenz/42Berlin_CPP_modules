/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:40:21 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/19 18:40:22 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/*data*/
	public:
		WrongCat();
		WrongCat(const WrongCat &a);
		~WrongCat();
	
		WrongCat &operator=(const WrongCat &a);

		void makeSound()const;
};




#endif