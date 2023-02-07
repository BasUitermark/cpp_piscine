/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 14:47:38 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/07 16:04:57 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"
#include "../include/Colors.hpp"
#include <iostream>

//========== Constructors ==========//

Data::Data()
: _value(0)
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