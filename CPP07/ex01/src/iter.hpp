#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
T Funky(T element){
	std::cout << "before: " << element << '\n';
	return (element + 1);
}

template <typename T, typename Func>
void iter(T *arr, int len, Func Funky){
	for (int i = 0; i < len; i++){
		arr[i] = Funky(arr[i]);
	}
}

#endif