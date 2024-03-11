/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:58:53 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:58:54 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap a("Gerd");
	ClapTrap b("Harald");

	a.attack(b.GetName());
	b.takeDamage(4);
	b.beRepaired(2);

	a.attack(b.GetName());
	b.takeDamage(10);
	b.beRepaired(2);
	return(0);
}