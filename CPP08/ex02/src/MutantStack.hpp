#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>

template <typename T, class Container = std::list<T> >
class MutantStack : public std::stack<T, Container>{
	private:

	public:
		MutantStack();
		MutantStack(const MutantStack &a);
		~MutantStack();

		MutantStack &operator=(const MutantStack &a);

		typedef typename Container::iterator it;

		it begin();
		it end();
};

#include "MutantStack.tpp"

#endif