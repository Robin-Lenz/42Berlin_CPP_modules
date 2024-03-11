/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:56 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:55:57 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <cstdlib>

class Zombie{
	private:
		std::string	_name;

	public:
		void announce( void );
		void getnamed(std::string tmp);
		Zombie();
		~Zombie();
};

Zombie	*zombieHorde( int N, std::string name);

#endif