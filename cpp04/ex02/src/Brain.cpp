/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 12:46:03 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 13:16:28 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include "../include/Utility.hpp"
#include <iostream>

//========== Constructors ==========//

Brain::Brain()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Brain default constructor called" RESET << std::endl;
}

//========== Destructor ==========//

Brain::~Brain()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Brain default destructor called" RESET << std::endl;
}
