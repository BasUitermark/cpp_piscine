/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:48:22 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 17:02:52 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

WrongAnimal::WrongAnimal()
{
	this->_type = "WRONG_NAME";

	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "WrongAnimal default constructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "WrongAnimal default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

WrongAnimal::~WrongAnimal()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "WrongAnimal default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "WrongAnimal copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "WrongAnimal copy assignment operator called" RESET << std::endl;
	this->_type = toAssign._type;
	
	return (*this);
}

//========== Get/Set Functions ==========//

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

//========== Member Functions ==========//

void	WrongAnimal::makeSound() const
{
	std::cout << ITALIC "?ohW" RESET << std::endl;
}