#include "ClapTrap.hpp"

int main(){
	ClapTrap a("Gerd");
	ClapTrap b("Harald");

	a.attack(b.GetName());
	b.takeDamage(a.GetDamage());
	return(0);
}