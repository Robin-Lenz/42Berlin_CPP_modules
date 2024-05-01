#include "Array.hpp"

template <typename T>
const char *Array<T>::OutOfBound::what()const throw(){
	return("Index out of bound\n");
}

/*template of the default constructor*/
template <typename T>
Array<T>::Array() : _arr(NULL), _size(0){}

/*template of the default destructor*/
template <typename T>
Array<T>::~Array() {
	delete[] _arr;
}

template <typename T>
Array<T>::Array(unsigned int value) : _arr(new T[value]), _size(value){
	
}

template <typename T>
Array<T>::Array(const Array &a){
	*this = a;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &a){
	int len = a.size();
	for (int i = 0; i < len; i++){
		this->_arr[i] = a._arr[i];
	}
	return *this;
}

template <typename T>
unsigned int Array<T>::size(void){

	return (this->_size);
}