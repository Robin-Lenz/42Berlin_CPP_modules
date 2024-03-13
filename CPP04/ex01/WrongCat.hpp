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