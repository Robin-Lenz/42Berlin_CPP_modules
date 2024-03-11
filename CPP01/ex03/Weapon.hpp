/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:56:30 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:56:31 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
# define	WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string	_type;
	
public:
	Weapon(std::string type);
	~Weapon();
	const std::string	&getType();
	void		setType(std::string type);
};


#endif