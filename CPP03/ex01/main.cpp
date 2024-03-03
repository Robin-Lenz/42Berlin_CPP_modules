#include "ScavTrap.hpp"


int main(){
	ClapTrap a("Gerd");
	ClapTrap b("Harald");
	ScavTrap c("Isolde");
	ScavTrap d;

	a.attack(b.GetName());
	b.takeDamage(4);
	b.beRepaired(2);

	a.attack(b.GetName());
	b.takeDamage(10);
	b.beRepaired(2);

	d.guardGate();
	c.attack("Harald");
	b.takeDamage(20);

	return(0);
}