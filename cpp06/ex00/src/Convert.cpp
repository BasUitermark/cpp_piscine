/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 11:37:36 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/06 16:59:52 by buiterma      ########   odam.nl         */
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
	this->c = static_cast<char>(this->_str[0]);
	
	this->i = static_cast<int>(c);
	this->d = static_cast<double>(c);
	this->f = static_cast<float>(c);
}
void	Convert::convertFromInt()
{
	this->i = static_cast<int>(atoi(this->_str.c_str()));
	
	this->c = static_cast<char>(i);
	this->d = static_cast<double>(i);
	this->f = static_cast<float>(i);
}
void	Convert::convertFromDouble()
{
	this->d = static_cast<double>(atof(this->_str.c_str()));
	
	this->c = static_cast<char>(d);
	this->i = static_cast<int>(d);
	this->f = static_cast<float>(d);
}
void	Convert::convertFromFloat()
{
	this->f = static_cast<float>(atof(this->_str.c_str()));
	
	this->c = static_cast<char>(f);
	this->i = static_cast<int>(f);
	this->d = static_cast<double>(f);
}

void	Convert::displayChar()
{	
	std::cout << "char:\t\t";

	if (isprint(this->c))
		std::cout << this->c << std::endl;
	else if (this->_str.compare("nan") == 0|| this->_str.compare("nanf") == 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	Convert::displayInt()
{
	std::cout << "int: \t\t";
	if (this->_str.compare("nan") == 0|| this->_str.compare("nanf") == 0)
		std::cout << "impossible" << std::endl;
	else if (this->i > std::numeric_limits<int>::max())
		std::cout << "> max" << std::endl;
	else if (this->i < std::numeric_limits<int>::lowest())
		std::cout << "< min" << std::endl;
	else
		std::cout<< this->i << std::endl;
}

void	Convert::displayDouble()
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "double: \t";

	if (this->d > std::numeric_limits<double>::max())
		std::cout << "+inf" << std::endl;
	else if (this->d < std::numeric_limits<double>::lowest())
		std::cout << "-inf" << std::endl;
	else
		std::cout << this->d << std::endl;
}

void	Convert::displayFloat()
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "float: \t\t";

	if (this->d > std::numeric_limits<float>::max())
		std::cout << "+inff" << std::endl;
	else if (this->d < std::numeric_limits<float>::lowest())
		std::cout << "-inff" << std::endl;
	else
		std::cout << this->f << "f" << std::endl;
}

void	Convert::displayVariables()
{
	displayChar();
	displayInt();
	displayDouble();
	displayFloat();
}

void	Convert::convertLiterals(int type)
{
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