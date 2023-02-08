/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 11:37:36 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/08 18:30:04 by buiterma      ########   odam.nl         */
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

int	Convert::verifyType()
{
	char*	end;

	if (_str.length() == 1 && isalpha(_str[0]))
		return (1);

	std::strtol(_str.c_str(), &end, 10);
	if (*end == '\0')
		return (2);

	std::strtod(_str.c_str(), &end);
	if (*end == '\0')
		return (3);

	std::strtof(_str.c_str(), &end);
	// if ((*end == 'f' && *end + 1 == '\0') ||
	if (end[_str.size() + 1] == '\0' || \
		_str.compare("-inff") == 0 || _str.compare("inff") == 0 || _str.compare("nanf") == 0)
		return (4);

	return (0);
}

void	Convert::convertFromChar()
{
	this->c = static_cast<char>(this->_str[0]);
	
	this->i = static_cast<long int>(c);
	this->d = static_cast<double>(c);
	this->f = static_cast<float>(c);
}
void	Convert::convertFromInt()
{
	this->il = static_cast<long int>(atol(this->_str.c_str()));
	
	this->c = static_cast<char>(il);
	this->d = static_cast<double>(il);
	this->f = static_cast<float>(il);
}
void	Convert::convertFromDouble()
{
	this->d = static_cast<double>(atof(this->_str.c_str()));
	
	this->c = static_cast<char>(d);
	this->il = static_cast<long int>(d);
	this->f = static_cast<float>(d);
}
void	Convert::convertFromFloat()
{
	this->f = static_cast<float>(atof(this->_str.c_str()));
	
	this->c = static_cast<char>(f);
	this->il = static_cast<long int>(f);
	this->d = static_cast<double>(f);
}

void	Convert::displayChar()
{	
	std::cout << "char:\t\t";

	if (isprint(this->c) && (this->il <= INT_MAX && this->il >= INT_MIN))
		std::cout << this->c << std::endl;
	else if (isascii(this->c) && (this->il <= INT_MAX && this->il >= INT_MIN))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::displayInt()
{
	std::cout << "int: \t\t";
	if (this->il <= INT_MAX && this->il >= INT_MIN)
	{
		this->i = static_cast<int>(this->il);
		std::cout<< this->i << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}

void	Convert::displayDouble()
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "double: \t";

	std::cout << this->d << std::endl;
}

void	Convert::displayFloat()
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "float: \t\t";

	std::cout << this->f << "f" << std::endl;
}

void	Convert::displayVariables()
{
	displayChar();
	displayInt();
	displayDouble();
	displayFloat();
}

void	Convert::convertLiterals()
{
	int	type = verifyType();

	switch (type)
	{
		case 1:
			convertFromChar();
			break ;
		case 2:
			convertFromInt();
			break ;
		case 3:
			convertFromDouble();
			break ;
		case 4:
			convertFromFloat();
			break ;
		default:
			std::cout << RED "Incorrect input" RESET << std::endl;
			return ;
	}
	displayVariables();
}