/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:55:04 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 10:41:57 by buiterma      ########   odam.nl         */
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
		std::cout << "Dog default constructor called" << std::endl;
}

//========== Destructor ==========//

Dog::~Dog()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "Dog default destructor called" << std::endl;
}

//========== Member Functions ==========//

void	Dog::makeSound() const
{
	std::cout << ITALIC "B0rk b0rk" RESET << std::endl;
}
