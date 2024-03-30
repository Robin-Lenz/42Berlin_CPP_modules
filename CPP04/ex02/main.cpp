/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:00:09 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 17:05:28 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
	const AAnimal *Arr[5];

	// Brain b;
	// Brain c(b);
	// b = c;

	// const AAnimal *meta = new AAnimal();
	const AAnimal* i = new Cat();
	const AAnimal* j = new Dog();
	// const WrongAnimal* z = new WrongCat();
	
	// (void)meta;
	(void)i;
	(void)j;
	// (void)Arr;
	// std::cout << i->getType() << " " << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	// z->makeSound();
	for (int counter = 0; counter < 5; counter++){
		if (counter % 2 == 0)
			Arr[counter] = new Cat();
		else
			Arr[counter] = new Dog();
	}
	for (int counter = 0; counter < 5; counter++){
		delete Arr[counter];
	}
	

	// delete meta;
	delete j;
	delete i;
	// delete z;

return 0;
}