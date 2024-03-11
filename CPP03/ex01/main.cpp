/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:59:10 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:59:26 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


int main(){
	ClapTrap a("Gerd");
	ClapTrap b("Harald");
	ScavTrap c("Isolde");
	ScavTrap d;
	ScavTrap e(d);

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
