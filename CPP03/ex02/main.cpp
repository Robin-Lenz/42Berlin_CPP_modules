#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(){
	ClapTrap a("Gerd");
	ClapTrap b("Harald");
	ScavTrap c("Isolde");
	ScavTrap d;
	ScavTrap h(d);
	FragTrap e("Ben");
	FragTrap f;
	FragTrap i = e;

	a.attack(b.GetName());
	b.takeDamage(4);
	b.beRepaired(2);

	a.attack(b.GetName());
	b.takeDamage(10);
	b.beRepaired(2);

	d.guardGate();
	c.attack("Harald");
	b.takeDamage(20);
	
	e.highFivesGuys();

	return(0);
}