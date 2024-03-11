/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:56:00 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/11 15:56:01 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name){
	Zombie *horde = new Zombie[N];
	std::string	tmp;
	int			start = 0;
	int			end = 0;
	int			i = 0;

	while (i < N){
		end = name.find_first_of(' ', start);
		tmp = name.substr(start, end - start);
		horde[i].getnamed(tmp);
		start = end + 1;
		i++;
	}
	return (horde);
}