#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		/* data */
	public:
		FragTrap();
		FragTrap(const FragTrap &a);
		FragTrap(std::string name);
		~FragTrap();

		FragTrap &operator=(const FragTrap &a);

		void highFivesGuys(void);
};


#endif
