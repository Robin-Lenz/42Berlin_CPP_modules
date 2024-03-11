/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:56:14 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:56:15 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_H
# define	HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_gun;
	public:
		HumanA(std::string name, Weapon &club);
		~HumanA();
		void	attack();
};

#endif