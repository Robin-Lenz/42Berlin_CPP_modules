#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>// NULL
#include <string>// exception
#include <iostream>//cout


template <typename T>
class Array {
	private:
		T *_arr;
		int _size;

	public:
		Array();
		Array(unsigned int value);
		Array(const Array &a);
		~Array();

		Array<T> &operator=(const Array &a);

		class OutOfBound : public std::exception {
			public:
				virtual const char *what()const throw();
		};
		
		unsigned int size(void);

		// std::string getName() const;
};

// # include "Array.cpp"

#endif