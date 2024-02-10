#ifndef	HUMANB_H
# define	HUMANB_H

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
private:
	Weapon *_knife;
	std::string _name;

public:
	HumanB(std::string name);
	// HumanB();
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &club);
};


#endif