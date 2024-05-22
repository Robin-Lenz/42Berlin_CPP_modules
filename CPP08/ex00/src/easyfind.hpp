/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:37:56 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/22 18:01:50 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>// std::vector
#include <deque>
#include <list>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T &cont, int value)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), value);
	if (it != cont.end()){
		std::cout << "value found\n";
		return (it);
	}
	throw std::out_of_range("value not found");
}

#endif