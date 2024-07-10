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
#include <ctime>

class PmergeMe {
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;
		int _len;
		PmergeMe();

	public:
		PmergeMe(const PmergeMe &a);
		PmergeMe(const char **av);
		~PmergeMe();

		PmergeMe &operator=(const PmergeMe &a);

		class NotADigit : public std::exception
		{
			const char *what()const throw();
		};

		class NumOutOfRange : public std::exception
		{
			const char *what()const throw();
		};

		class Duplicate: public std::exception
		{
			const char *what()const throw();
		};

		void SortVec(const char **av);
		void SortDeq(const char **av);
		template <typename T>
		void FordJohnson(T &cont, int left, int right);
		template <typename T>
		void merge(T &cont, int left, int mid, int right);


};

void isNumber(const char **av, int i);

template <typename T>
void print_arr(T &cont);

template <typename T>
void check_duplicates(T &cont);

#endif