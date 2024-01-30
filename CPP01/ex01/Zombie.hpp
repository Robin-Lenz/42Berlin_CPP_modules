#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iomanip>
#include <iostream>
#include <string>


class Zombie{

	private:
		std::string	_name;

	public:
		void announce( void );
		Zombie(std::string name);
		~Zombie();
		std::string	tmp;
};

Zombie	*zombieHorde( int N, std::string name);
Zombie	*newZombie( std::string name );


#endif