/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 20:23:02 by robin             #+#    #+#             */
/*   Updated: 2024/06/04 14:07:03 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

const char *PmergeMe::NotADigit::what()const throw(){
	return ("element is not a positive number");
}

const char *PmergeMe::NumOutOfRange::what()const throw(){
	return ("element is of range int");
}

const char *PmergeMe::Duplicate::what()const throw(){
	return ("Duplicate in list");
}

PmergeMe::PmergeMe(){
	
}

PmergeMe::PmergeMe(const PmergeMe &a){
	_vector = a._vector;
	_deque = a._deque;
}

PmergeMe::PmergeMe(const char **av){
	
	SortVec(av);

	std::cout << std::endl;

	SortDeq(av);
}

void isNumber(const char **av, int i){
	int j = 0;
	while(av[i][j]){
		if (isdigit(av[i][j]) == 0)
			throw PmergeMe::NotADigit();
		j++;
	}
}

PmergeMe::~PmergeMe(){
	
}

PmergeMe &PmergeMe::operator=(const PmergeMe &a){
	_vector = a._vector;
	_deque = a._deque;
	return(*this);
}

void PmergeMe::SortVec(const char **av ){
	std::vector<int> copy;

	std::clock_t start = std::clock();
	//input validation 
	int value;
	_len = 0;
	for (int i = 1; av[i]; i++){
		isNumber(av, i);
		value = atoi(av[i]);
		if (value < 0)
			throw PmergeMe::NumOutOfRange();
		_vector.push_back(value);
		copy.push_back(value);
		_len++;
	}

	// std::vector<int>::iterator tmp;
	// for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it)
	// {
	// 	tmp = it + 1;
	// 	if ((tmp) != _vector.end() && *it > *(tmp))
	// 		std::swap(it, tmp);
	// 	++it;
	// }

	FordJohnson(_vector, 0, _vector.size() - 1);
	
	check_duplicates(_vector);

	std::cout << std::endl;
	std::cout << "Before: ";
	print_arr(copy);

	std::cout << "After: ";
	print_arr(_vector);

	std::clock_t end = std::clock();
	double span = (end - start) / 1000.0;
	std::cout << "Time to process a range of " << _len << " elements with std::vector in ms: " << span << std::endl;;

}

void PmergeMe::SortDeq(const char **av){
	std::deque<int> copy;


	std::clock_t start = std::clock();
	//input validation 
	int value;
	_len = 0;
	for (int i = 1; av[i]; i++){
		isNumber(av, i);
		value = atoi(av[i]);
		if (value < 0)
			throw PmergeMe::NumOutOfRange();
		_deque.push_back(value);
		copy.push_back(value);
		_len++;
	}


	// std::deque<int>::iterator tmp;
	// for (std::deque<int>::iterator it = _deque.begin(); it != _deque.end(); ++it)
	// {
	// 	tmp = it + 1;
	// 	if ((tmp) != _deque.end() && *it > *(tmp))
	// 		std::swap(it, tmp);
	// 	++it;
	// }

	FordJohnson(_deque, 0, _deque.size() - 1);
	
	check_duplicates(_deque);

	std::cout << "Before: ";
	print_arr(copy);

	std::cout << "After: ";
	print_arr(_deque);
	std::clock_t end = std::clock();
	double span = (end - start) / 1000.0;
	std::cout << "Time to process a range of " << _len << " elements with std::deque in ms: " << span << std::endl;;

}

template <typename T>
void PmergeMe::FordJohnson(T &cont, int left, int right){
// split list up sort pairs
	if (left >= right)
		return ;
	int n = right - left + 1;
	if (n == 2){
		if (cont[left] > cont[right]){
			std::swap(cont[left], cont[right]);
		}
		return ;
	}
	int mid = left + ((right - left) / 2);
	FordJohnson(cont, left, mid);
	FordJohnson(cont, mid + 1, right);

	merge(cont, left, mid, right);

}


template <typename T>
void PmergeMe::merge(T& cont, int left, int mid, int right){
// calculate subarray length
	int len1 = mid - left + 1;
	int len2 = right - mid;

	std::vector<int> L(len1);
	std::vector<int> R(len2);
// copy data to temporary lists
	for (int i = 0; i < len1; i++)
    	L[i] = cont[left + i];
	for (int i = 0; i < len2; i++)
    	R[i] = cont[mid  + 1 + i];


// merge the two sorted substrings
	int i = 0, j = 0; int k = left;
	while (i < len1 && j < len2){
		if (L[i] <= R[j]){
			cont[k] = L[i];
			i++;
		}
		else{
			cont[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy any remaining elements of L
    while (i < len1) {
        cont[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R
    while (j < len2) {
        cont[k] = R[j];
        j++;
        k++;
    }
}

template <typename T>
void print_arr(T &cont){
	typename T::iterator po = cont.begin();
	while (po != cont.end()){
		std::cout << *po << " ";
		++po;
	}
	std::cout << "\n";
}

template <typename T>
void check_duplicates(T &cont){
	typename T::iterator pa = cont.begin();
	++pa;
	while (pa != cont.end())
	{
		if (*pa == *(pa -1))
			throw PmergeMe::Duplicate();
		++pa;
	}
}