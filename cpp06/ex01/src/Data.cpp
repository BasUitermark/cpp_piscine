#include "../include/Data.hpp"
#include "../include/Colors.hpp"
#include <iostream>

//========== Constructors ==========//

Data::Data()
: _value(30)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Data default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

Data::~Data()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Data default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Data::Data(const Data& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Data copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Data& Data::operator = (const Data& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Data copy assignment operator called" RESET << std::endl;
	this->_value = toAssign._value;
	
	return (*this);
}

void	Data::testFunction()
{
	std::cout << "THIS IS A TEST AND THIS FUNCTION STILL WORKS" << std::endl;
	std::cout << "The value of _value is: "<< this->_value << std::endl;
}