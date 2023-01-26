/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:40:42 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 15:50:06 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

Animal::Animal()
{
	this->_type = RED "NO_NAME" RESET;

	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Animal default constructor called" RESET << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Animal default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

Animal::~Animal()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Animal default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Animal::Animal(const Animal& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Animal copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Animal& Animal::operator = (const Animal& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Animal copy assignment operator called" RESET << std::endl;
	this->_type = toAssign._type;
	
	return (*this);
}

//========== Get/Set Functions ==========//

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

//========== Member Functions ==========//

void	Animal::makeSound() const
{
	std::cout << ITALIC "Who?" RESET << std::endl;
}