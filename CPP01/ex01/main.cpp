#include "Zombie.hpp"

Zombie *newZombie( std::string name ){
	Zombie	*newZ = new Zombie(name);
	return(newZ);
}

void Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(int ac, char **av){
	int	n;
	if (ac != 3){
		std::cout << "wrong entry" << std::endl;
		return (0);
	}
	n = std::stoi(av[1]);
	std::atoi(av[1]);
	std::cout << "hi";
	// Zombie* horde = new Zombie[n];
	Zombie *horde = zombieHorde(n, std::string(av[2]));
	(void)horde;
	return(0);
}