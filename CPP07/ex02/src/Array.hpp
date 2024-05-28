#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>// NULL
#include <string>// exception
#include <iostream>//cout
#include <time.h>
# include <cstdlib>
#include <ostream>
// #include <math>


template <typename T>
class Array {
	private:
		T *_arr;
		int _size;

	public:
		Array();
		Array(int value);
		Array(const Array &a);
		~Array();

		Array<T> &operator=(const Array &a);
		T &operator[](const int a);

		class OutOfBound : public std::exception {
			public:
				virtual const char *what()const throw();
		};
		
		unsigned int size(void);

		T &getVal(int i)const;
		int getSize()const;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &a);

#endif