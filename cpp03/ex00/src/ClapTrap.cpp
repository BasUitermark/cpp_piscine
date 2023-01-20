/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 17:04:11 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/20 17:57:24 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() :_name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& toAssign)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = toAssign._name;
	this->_hitPoints = toAssign._hitPoints;
	this->_energyPoints = toAssign._energyPoints;
	this->_attackDamage = toAssign._attackDamage;
	
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->_name << " attacks " << target << " , causing" << this->_attackDamage << " point of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " amount of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " heals " << amount << " amount of hit points!" << std::endl;
}