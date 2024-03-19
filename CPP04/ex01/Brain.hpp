/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 18:41:02 by rpodack           #+#    #+#             */
/*   Updated: 2024/03/19 18:41:03 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	private:
		/* data */
	public:
		Brain(/* args */);
		Brain(Brain &a);
		~Brain();

		Brain &operator=(const Brain &a);
		std::string ideas[100];
};

#endif