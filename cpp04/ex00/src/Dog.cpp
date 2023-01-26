/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:55:04 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 15:50:44 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

Dog::Dog(): Animal("Dog")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Dog default constructor called" RESET << std::endl;
}

//========== Destructor ==========//

Dog::~Dog()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Dog default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Dog::Dog(const Dog& toCopy): Dog(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Dog copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Dog& Dog::operator = (const Dog& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Dog copy assignment operator called" RESET << std::endl;
	this->setType(toAssign.getType());
	
	return (*this);
}

//========== Member Functions ==========//

void	Dog::makeSound() const
{
	std::cout << ITALIC "B0rk b0rk" RESET << std::endl;
}
