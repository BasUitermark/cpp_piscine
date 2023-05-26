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


void	Span::addNumbers(const std::vector<int>& numbers)
{
	if (_array.size() + numbers.size() > _maxSize)
		throw ArrayOverflow();

	_array.insert(_array.end(), numbers.begin(), numbers.end());
}


int	Span::shortestSpan() const
{
	if (this->_array.size() < 2)
		throw ArraySizeTooSmall();

	std::vector<int> sortedCopy = _array;
	std::sort(sortedCopy.begin(), sortedCopy.end());

	int shortest = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedCopy.size(); ++i)
	{
		int diff = sortedCopy[i] - sortedCopy[i - 1];
		if (diff < shortest)
			shortest = diff;
	}

	return shortest;
}


int	Span::longestSpan() const
{
	if (this->_array.size() < 2)
		throw ArraySizeTooSmall();

	int minElement = *std::min_element(_array.begin(), _array.end());
	int maxElement = *std::max_element(_array.begin(), _array.end());

	return maxElement - minElement;
}