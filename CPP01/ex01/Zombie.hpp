#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie{
	private:
		std::string	_name;

	public:
		void announce( void );
		void getnamed(std::string tmp);
		Zombie();
		~Zombie();
};

Zombie	*zombieHorde( int N, std::string name);

#endif