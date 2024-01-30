#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(void){
	Zombie	*newZ = newZombie("ich");
	randomChump("du");
	delete newZ;
	return(0);
}