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