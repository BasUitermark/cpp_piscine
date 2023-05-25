#include "../include/ScalarConverter.hpp"
#include "../include/Colors.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <limits>
#include <iomanip>

//========== Constructors ==========//

ScalarConverter::ScalarConverter(const std::string str)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "ScalarConverter default constructor called" RESET << std::endl;
	this->_str = str;
}

//========== Destructors ==========//

ScalarConverter::~ScalarConverter()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "ScalarConverter default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

ScalarConverter::ScalarConverter(const ScalarConverter& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ScalarConverter copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

ScalarConverter& ScalarConverter::operator = (const ScalarConverter& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ScalarConverter copy assignment operator called" RESET << std::endl;
	this->_str = toAssign._str;
	
	return (*this);
}

bool	ScalarConverter::isNumber(std::string str)
{
	for (int i = str[0] == '-' ? 1 : 0; str[i]; i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

int	ScalarConverter::verifyType()
{
	char*	end;

	if (isNumber(_str))
		return (2);

	if (_str.length() == 1 && isascii(_str[0]))
		return (1);

	// std::strtol(_str.c_str(), &end, 10);
	// if (*end == '\0')
	// 	return (2);

	std::strtod(_str.c_str(), &end);
	if (*end == '\0')
		return (3);

	std::strtof(_str.c_str(), &end);
	if ((*end == 'f' && end[_str.length() + 1] == '\0') || \
		_str.compare("-inff") == 0 || _str.compare("inff") == 0 || _str.compare("nanf") == 0)
		return (4);

	return (0);
}

void	ScalarConverter::convertFromChar()
{
	c = static_cast<char>(_str[0]);

	i = static_cast<int>(c);
	d = static_cast<double>(c);
	f = static_cast<float>(c);
}

void	ScalarConverter::convertFromInt()
{
	i = static_cast<int>(atoi(_str.c_str()));

	c = static_cast<char>(i);
	d = static_cast<double>(i);
	f = static_cast<float>(i);
}

void	ScalarConverter::convertFromDouble()
{
	d = static_cast<double>(atof(_str.c_str()));

	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
}

void	ScalarConverter::convertFromFloat()
{
	f = static_cast<float>(atof(_str.c_str()));

	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
}

void	ScalarConverter::displayChar()
{
	std::cout << "char:\t\t";

	if (c != i)
		std::cout << "impossible" << std::endl;
	else if (isprint(c))
		std::cout << c << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	ScalarConverter::displayInt()
{
	std::cout << "int: \t\t";

	il = static_cast<long int>(atol(_str.c_str()));
	if (il <= INT_MAX && il >= INT_MIN)
		std::cout<< i << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::displayDouble()
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "double: \t";

	il = static_cast<long int>(atol(_str.c_str()));
	if (il <= INT_MAX && il >= INT_MIN && _type != 2)
		std::cout << d << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::displayFloat()
{
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	std::cout << "float: \t\t";

	il = static_cast<long int>(atol(_str.c_str()));
	if (il <= INT_MAX && il >= INT_MIN && _type != 2)
		std::cout << f << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	ScalarConverter::displayVariables()
{
	displayChar();
	displayInt();
	displayDouble();
	displayFloat();
}

void	ScalarConverter::convertLiterals(std::string str)
{
	_str = str;
	int	_type = verifyType();

	switch (_type)
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