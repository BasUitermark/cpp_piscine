#include "../include/Array.hpp"
// #include <cstdio>


template<typename T>
Array<T>::Array()
{
	this->_array = new T[0];
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Array default constructor called" RESET << std::endl;
	return;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	T *temp = new T();
	_len = n;
	_array = new T[_len];
	for (unsigned int i = 0; i < _len; i++)
	{
		_array[i] = *temp;
	}
	delete temp;

	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Array default constructor called" RESET << std::endl;
	return;
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->_array;
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Array default destructor called" RESET << std::endl;
	return;
}

template<typename T>
Array<T>::Array(const Array& toCopy)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Array default copy constructor called" RESET << std::endl;
	this->_array = NULL;
	*this = toCopy;
	return;
}

template<typename T>
Array<T>& Array<T>::operator= (const Array& toAssign)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Array default toAssign operator called" RESET << std::endl;
	this->_len = toAssign._len;
	delete[] this->_array;
	this->_array = new T[this->_len];
	for (size_t i = 0; i < toAssign.size(); i++)
		this->_array[i] = toAssign[i];
	return(*this);
}

template<typename T>
const char* Array<T>::IndexOutOfBoundsException::what() const throw()
{
    return "Index out of bounds exception";
}

template<typename T>
T&		Array<T>::operator[] (size_t i) const
{
	if (i >= this->_len)
		throw(IndexOutOfBoundsException());
	return(this->_array[i]);
}

template<typename T>
size_t	Array<T>::size(void) const
{
	return(this->_len);
}

template<typename T>
std::ostream& operator<< (std::ostream& o, const Array<T>& a)
{
	unsigned int len = a.size();
	for (unsigned int i = 0; i < len; i++)
		o << a[i] << std::endl;
	return (o);
}
