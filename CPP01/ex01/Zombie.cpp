#include "Zombie.hpp"

Zombie::Zombie(std::string nm) : _name(nm){
	this->announce();
	return;
}

Zombie::~Zombie(){
	return;
}

// Horde::Horde(int n, std::string name){
// 	// int	i = 0;
// 	// while (i < n){
// 	// 	horde[i] = newZombie(name);
// 	// 	i++;
// 	// }
// };

// Horde::~Horde(){

// };