/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:25:36 by rpodack           #+#    #+#             */
/*   Updated: 2024/05/22 18:25:37 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char *Span::MaxNumReached::what() const throw(){
	return("Max num of values reached");
}

const char *Span::NotEnoughValues::what() const throw(){
	return("Not enough values to calculate span");
}

Span::Span() : _max(5){

};

Span::Span(const Span &a){
	*this = a;
};

Span::Span(int max){
	_max = max;
};

Span::~Span(){
	
};

Span &Span::operator=(const Span &a){
	_max = a._max;
	_ls = a._ls;
	return(*this);
};

void Span::addNumber(unsigned int val){
	if (_ls.size() <= _max - 1)
		_ls.push_back(val);
	else{
		throw MaxNumReached();
	}
}
void Span::addManyNumbers(unsigned int val1, unsigned int val2){
	while (val1 != val2)
	{
		addNumber(val1);
		if (val1 < val2)
			val1++;
		if (val1 > val2)
			val1--;
	}
	addNumber(val2);
}

int Span::shortestSpan(){
	size_t len = _ls.size();
	if (len <= 1){
		throw NotEnoughValues();
	}
	int min = longestSpan();
	for (std::list<int>::iterator i = _ls.begin(); i != _ls.end(); i++){
		for (std::list<int>::iterator j = _ls.begin(); j != _ls.end(); j++){
			if (i == j)
				continue;
			if (std::abs(*i - *j) < min)
				min = std::abs(*i - *j);
		}
	}
	return(min);
}

int Span::longestSpan(){
	size_t len = _ls.size();
	if (len <= 1){
		throw NotEnoughValues();
	}
	std::list<int>::iterator smallest = std::min_element(_ls.begin(), _ls.end());
	std::list<int>::iterator largest = std::max_element(_ls.begin(), _ls.end());
	return(*largest - *smallest);
}