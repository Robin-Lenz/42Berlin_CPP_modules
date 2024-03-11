/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:58:50 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:58:51 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <ostream>
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _hitpoints;
		int _energy;
		int _damage;

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &a);
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap &operator=(const ClapTrap &a);

		int GetDamage();
		std::string GetName();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif