/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 10:02:57 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 10:59:58 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongCat default constructor called" << std::endl;
}

//========== Destructor ==========//

WrongCat::~WrongCat()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongCat default destructor called" << std::endl;
}

//========== Member Functions ==========//

void	WrongCat::makeSound() const
{
	std::cout << ITALIC "wu4iM" RESET << std::endl;
}