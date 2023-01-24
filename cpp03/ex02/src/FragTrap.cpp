/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 17:02:44 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/24 17:12:49 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include <iostream>

//========== Constructors ==========//

FragTrap::FragTrap(): ClapTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	if (DEBUG_MESSAGE)
		std::cout << "FragTrap constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(50);
}

//========== Destructor ==========//

FragTrap::~FragTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << "FragTrap destructor called" << std::endl;
}

//========== Copy Constructor ==========//

FragTrap::FragTrap(const FragTrap& toCopy): ClapTrap(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << "FragTrap copy constructor called" << std::endl;
	*this = toCopy;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << ": \"Can I get a high five guys!?\"" << std::endl;
}