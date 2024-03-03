#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <ostream>
#include <iostream>

class ClapTrap
{
	private:

	protected:
		std::string	_name;
		int			_hitpoints;
		int			_energy;
		int			_damage;

	public:
		ClapTrap(std::string name);
		~ClapTrap();

		int GetDamage();
		std::string GetName();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif