#include "../include/Array.hpp"
#include <cstdio>


template<typename T>
Array<T>::Array()
{
	this->_array = new T[n];
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Data default constructor called" RESET << std::endl;
	return;
}

template<typename T>
Array<T>::Array(size_t n, T defaultVal)
{
	this->_array = new T[n];
	for (size_t i = 0; i < this->_len; i++)
		(*this)[i] = defaultVal;
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Data default constructor called" RESET << std::endl;
	return;
}

template<typename T>
Array<T>::~Array()
{
	delete[] this->_array;
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Data default destructor called" RESET << std::endl;
	return;
}

template<typename T>
Array<T>::Array(const Array& copy)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Data default copy constructor called" RESET << std::endl;
	this->_array = NULL;
	*this = copy;
	return;
}

template<typename T>
Array<T>& Array<T>::operator= (const Array<T>& assignment)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Data default assignment operator called" RESET << std::endl;
	if (this != &assignment)
	{
		this->_len = assignment.size();
		delete[] this->_array;
		this->_array = new T[assignment.size()];
		for (size_t i = 0; i < assignment.size(); i++)
			this->_array[i] = assignment[i];
	}
	return(*this);
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