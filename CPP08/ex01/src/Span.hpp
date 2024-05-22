#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <time.h>

class Span {
	private:
		std::list<int> _ls;
		size_t _max;

	public:
		Span();
		Span(const Span &a);
		Span(int max);
		~Span();

		Span &operator=(const Span &a);

		class MaxNumReached : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class NotEnoughValues : public std::exception
		{
			public:
				const char *what() const throw();
		};

		void addNumber(unsigned int val);
		int shortestSpan();
		int longestSpan();
		void addManyNumbers(unsigned int val1, unsigned int val2);
};

#endif