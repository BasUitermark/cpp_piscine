/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:02:57 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 13:34:37 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Brain.hpp"
#include "../include/Utility.hpp"
#include <iostream>

//========== Constructors ==========//

Cat::Cat(): Animal("Cat")
{
	this->catBrain = new Brain;

	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Cat default constructor called" RESET << std::endl;
}

//========== Destructor ==========//

Cat::~Cat()
{
	delete	catBrain;

	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Cat default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Cat::Cat(const Cat& toCopy)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "Cat copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Cat& Cat::operator = (const Cat& toAssign)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "Cat copy assignment operator called" RESET << std::endl;
	
	this->_type = toAssign._type;
	return (*this);
}

//========== Member Functions ==========//

void	Cat::makeSound()
{
	std::cout << ITALIC "Mi4uw" RESET << std::endl;
}