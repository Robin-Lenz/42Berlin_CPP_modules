#include "Zombie.hpp"

int	main(int ac, char **av){
	int	n = std::stoi(av[1]);;
	if (ac != 3){
		std::cout << "wrong entry [should be <sizeof(horde)> <names>]" << std::endl;
		return (0);
	}
	std::atoi(av[1]);
	Zombie *horde = zombieHorde(n, std::string(av[2]));
	for (int i = 0; i < n; i++){
		horde[i].announce();
	}
	delete[] horde;
	return(0);
}