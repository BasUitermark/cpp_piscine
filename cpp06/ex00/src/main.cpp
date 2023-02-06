/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/01 18:09:16 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/06 17:00:04 by buiterma      ########   odam.nl         */
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
	if (argc != 2)
		return (EXIT_FAILURE);
	
	Convert	newConvert(argv[1]);

	newConvert.convertLiterals(verifyType(argv[1]));
}
