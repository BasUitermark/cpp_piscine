/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 12:46:03 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 10:44:01 by buiterma      ########   odam.nl         */
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

//========== Copy Constructor ==========//

Brain::Brain(const Brain& toCopy): Brain(toCopy)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "Brain copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Brain& Brain::operator = (const Brain& toAssign)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "Brain copy assignment operator called" RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toAssign._ideas[i];	
	return (*this);
}