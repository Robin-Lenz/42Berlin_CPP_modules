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
Array<T>::Array(int value) : _arr(new T[value]), _size(value){
	
}

template <typename T>
Array<T>::Array(const Array &a){
	this->_arr = NULL;
	this->_size = 0;
	*this = a;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &a){
	if (this != &a)
	{
		delete [] this->_arr;
		this->_arr = new T[a._size];
		for (int i = 0; i < a._size; i++)
			this->_arr[i] = a._arr[i];
		this->_size = a._size;
	}
	return *this;
}

template <typename T>
T &Array<T>::operator[](const int a){
	if (a < 0 || a >= _size){
		throw OutOfBound();
	}
	return (_arr[a]);
}

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &arr){
	if (arr.getSize() > 0){

		for (int i = 0; i < arr.getSize(); i++)
		{
			o << arr.getVal(i) << " ";
		}
	}
	return o;
}

template <typename T>
unsigned int Array<T>::size(void){
	return (this->_size);
}

template <typename T>
T &Array<T>::getVal(int i)const{
	return(_arr[i]);
}

template <typename T>
int Array<T>::getSize()const{
	return(_size);
}