/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robin <robin@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-01 20:23:02 by robin             #+#    #+#             */
/*   Updated: 2024-06-01 20:23:02 by robin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(){
	
};

PmergeMe::PmergeMe(const PmergeMe &a){
	_vector = a._vector;
	_deque = a._deque;
};

PmergeMe::PmergeMe(char **av){
	//input validation here ?

	int value;
	for (int i = 0; av[i]; i++){

		if (isdigit(av[i][0]) != 0)// loop through string here
			//throw
		value = atoi(av[i]);
		_vector.push_back(value);
		_deque.push_back(value);
	}
};

PmergeMe::~PmergeMe(){
	
};

PmergeMe &PmergeMe::operator=(const PmergeMe &a){
	_vector = a._vector;
	_deque = a._deque;
	return(*this);
};