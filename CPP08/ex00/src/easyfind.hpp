#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>// std::vector

template<typename T>
void easyfind(T &container ,int val){
	typename T::iterator it = container.begin();
	while (it != container.end())
	{
		if (*it == val){
			std::cout << "value found\n";
			return ;
		}
		++it;
	}
	throw std::out_of_range("Not found");
}

#endif