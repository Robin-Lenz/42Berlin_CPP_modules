#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int	main(void){
	Zombie	*newZ = newZombie("ich");
	delete newZ;
	randomChump("du");
	return(0);
}