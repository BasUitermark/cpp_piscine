/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   verifyType.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/02 16:42:31 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/02 17:15:35 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "../include/cpp06.h"

bool	hasDecimalPoint(std::string str)
{
	int	count = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			count++;
	}
	if (count == 1)
		return (true);
	return (false);
}

bool	isNum(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		while (str[i] == '-')
			i++;
		if (!isdigit(str[i]) && str[i] != '.')
			return (false);
	}
	return (true);
}

bool	isChar(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]) && str[i] != '.')
			return (false);
	}
	return (true);
}

/**
 * 1: char
 * 2: int
 * 3: double
 * 4: float
 */
int	verifyType(std::string convert)
{
	if (convert.length() == 1 && islower(convert[0]))
		return (1);
	else if ((convert.back() == 'f' && isNum(convert.substr(0, convert.size() - 1)) && hasDecimalPoint(convert)) \
			|| convert.compare("nanf") == 0 || convert.compare("-inff") == 0 || convert.compare("+inff") == 0)
		return (4);
	else if ((isNum(convert) && hasDecimalPoint(convert.substr(0, convert.size() - 1))) \
			|| convert.compare("nan") == 0 || convert.compare("-inf") == 0 || convert.compare("+inf") == 0)
		return (3);
	else if (isNum(convert) && !isChar(convert) && !hasDecimalPoint(convert))
		return (2);
	return (0);
}