/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 11:37:36 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/02 18:09:32 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Convert.hpp"
#include "../include/Colors.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <iomanip>

//========== Constructors ==========//

Convert::Convert(std::string str)
: _str(str)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Convert default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

Convert::~Convert()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Convert default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Convert::Convert(const Convert& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Convert copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Convert& Convert::operator = (const Convert& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Convert copy assignment operator called" RESET << std::endl;
	this->_str = toAssign._str;
	
	return (*this);
}

void	Convert::convertFromChar()
{
	this->c = static_cast<char>(atoi(this->_str.c_str()));
	
	this->i = static_cast<int>(c);
	this->d = static_cast<double>(c);
	this->f = static_cast<float>(c);
}

void	Convert::convertLiterals(int type)
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);

	switch (type)
	{
		case 1:
			std::cout << "The input \"" << _str << "\" to be converted is a: char" << std::endl;
			convertFromChar();
			break ;
		case 2:
			std::cout << "The input \"" << _str << "\" to be converted is an: int" << std::endl;
			// convertFromInt(_str);
			break ;
		case 3:
			std::cout << "The input \"" << _str << "\" to be converted is a: double" << std::endl;
			// convertFromDouble(_str);
			break ;
		case 4:
			std::cout << "The input \"" << _str << "\" to be converted is a: float" << std::endl;
			// convertFromFloat(_str);
			break ;
		default:
			std::cout << RED "Incorrect input" RESET << std::endl;
	}
}