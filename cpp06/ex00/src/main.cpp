/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:09:16 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/02 16:46:03 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include "../include/Convert.hpp"
#include "../include/cpp06.h"

int main(int argc, char const *argv[])
{
	std::string	str;

	if (argc != 2)
		return (EXIT_FAILURE);
	// (void) argc;
	// (void) argv;

	// std::cout << std::fixed;
	// std::cout << std::setprecision(1);

	// str = argv[1];

	// char	c = static_cast<char>(atoi(str.c_str()));
	// int		i = static_cast<int>(atoi(str.c_str()));
	// double	d = static_cast<double>(atoi(str.c_str()));
	// float	f = static_cast<float>(atoi(str.c_str()));
	// std::cout << "'" << c <<  "'" << std::endl;
	// std::cout << i << std::endl;
	// std::cout << d << std::endl;
	// std::cout << f << "f" << std::endl;
	Convert	newConvert(argv[1]);

	newConvert.convertLiterals(verifyType(argv[1]));
}
