/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:20:49 by rpodack           #+#    #+#             */
/*   Updated: 2024/06/04 13:20:50 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <deque>

class PmergeMe {
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &a);
		PmergeMe(char **av);
		~PmergeMe();

		PmergeMe &operator=(const PmergeMe &a);

		void FordJohnsson(std::vector<int> &cont);

};


#endif