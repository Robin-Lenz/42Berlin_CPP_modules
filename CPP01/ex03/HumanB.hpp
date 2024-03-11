/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:56:20 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:56:21 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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