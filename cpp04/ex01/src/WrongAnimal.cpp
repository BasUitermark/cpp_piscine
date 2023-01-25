/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:48:22 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 10:48:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#include "../include/WrongAnimal.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

WrongAnimal::WrongAnimal()
{
	this->_type = RED "WRONG_NAME" RESET;

	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongAnimal default constructor called" << std::endl;
}

//========== Destructors ==========//

WrongAnimal::~WrongAnimal()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongAnimal default destructor called" << std::endl;
}

//========== Get/Set Functions ==========//

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

//========== Member Functions ==========//

void	WrongAnimal::makeSound() const
{
	std::cout << ITALIC "?ohW" RESET << std::endl;
}