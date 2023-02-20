#include "../include/Span.hpp"

#include "../include/Span.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

//========== Constructors ==========//

Span::Span(unsigned int n)
: _maxSize(n)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Span default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

Span::~Span()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Span default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Span::Span(const Span& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Span copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Span& Span::operator = (const Span& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Span copy assignment operator called" RESET << std::endl;
	this->_maxSize = toAssign._maxSize;
	this->_array = toAssign._array;

	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->_array.size() < _maxSize)
		this->_array.push_back(n);
	else
		throw ArrayOverflow();
}

int	Span::shortestSpan() const
{
	if (this->_array.size() < 2)
		throw ArraySizeTooSmall();

	std::vector<int>	copy = this->_array;

	std::sort(copy.begin(), copy.end());

	return (copy.at(1) - copy.at(0));
}

int	Span::longestSpan() const
{
	if (this->_array.size() < 2)
		throw ArraySizeTooSmall();

	std::vector<int>	copy = this->_array;

	std::sort(copy.begin(), copy.end());

	return (copy.back() - copy.at(0));
}