/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/24 14:34:36 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/24 16:56:39 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	if (DEBUG_MESSAGE)
		std::cout << "ScavTrap constructor called" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

//========== Destructor ==========//

ScavTrap::~ScavTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << "ScavTrap destructor called" << std::endl;
}

//========== Copy Constructor ==========//

ScavTrap::ScavTrap(const ScavTrap& toCopy): ClapTrap(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = toCopy;
}

//========== Member Functions ==========//

void	ScavTrap::attack(std::string target)
{
	if (getHitPoints() > 0 && getEnergyPoints() > 0)
	{
		setEnergyPoints(getEnergyPoints() - 1);
		std::cout << BLUE << getName()<< " attacks " << target << ", causing " << getAttackDamage() << " point of damage!" RESET << std::endl;
		return ;
	}
	std::cout << getName() << " couldn't attack because it doesn't have enough HP or EP!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now in Gate Keeper mode." << std::endl;
}