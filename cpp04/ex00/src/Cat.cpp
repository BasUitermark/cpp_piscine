/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:02:57 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 10:39:29 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

Cat::Cat(): Animal("Cat")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "Cat default constructor called" << std::endl;
}

//========== Destructor ==========//

Cat::~Cat()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "Cat default destructor called" << std::endl;
}

//========== Member Functions ==========//

void	Cat::makeSound() const
{
	std::cout << ITALIC "Mi4uw" RESET << std::endl;
}