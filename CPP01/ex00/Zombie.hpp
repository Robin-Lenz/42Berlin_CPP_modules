/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:55:44 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:55:45 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iomanip>
#include <iostream>

class Zombie{

	private:
		std::string	_name;
	
	public:
		void announce( void );
		Zombie(std::string name);
		~Zombie();
		std::string	tmp;
};

void	randomChump( std::string name );
Zombie	*newZombie( std::string name );

#endif