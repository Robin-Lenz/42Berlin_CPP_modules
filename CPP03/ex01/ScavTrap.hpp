#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &a);
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &a);

		void guardGate();
		void attack(const std::string& target);
};


#endif