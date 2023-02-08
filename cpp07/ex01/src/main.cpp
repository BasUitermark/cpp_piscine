/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 12:07:58 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/08 15:52:58 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"
#include <iostream>

template <typename T>
void	add(T& n)
{
	n += 2;
}

template <typename T>
void	substract(T& n)
{
	n -= 2;
}

template <typename T>
void	display(T& content)
{
	std::cout << content << std::endl;
}

int main(void)
{
	int		intArray[4] = {1, 2, 3 ,4};
	char	charArray[4] = {'A', 'B', 'C', 'D'};

	std::cout << "BEFORE ADD"<< std::endl;
	::iter(intArray, 4, display);
	std::cout << "AFTER ADD"<< std::endl;
	::iter(intArray, 4, add);
	::iter(intArray, 4, display);
	std::cout << "AFTER SUBSTRACT"<< std::endl;
	::iter(intArray, 4, substract);
	::iter(intArray, 4, display);

	std::cout << "BEFORE ADD"<< std::endl;
	::iter(charArray, 4, display);
	std::cout << "AFTER ADD"<< std::endl;
	::iter(charArray, 4, add);
	::iter(charArray, 4, display);
	std::cout << "AFTER SUBSTRACT"<< std::endl;
	::iter(charArray, 4, substract);
	::iter(charArray, 4, display);

}
