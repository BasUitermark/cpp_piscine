/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/20 17:04:11 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 15:33:55 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <string>
#include <iostream>

//========== Constructors ==========//

ClapTrap::ClapTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG_MESSAGE)
		std::cout << "Default constructor called" << std::endl;
}

//========== Destructor ==========//

ClapTrap::~ClapTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << "Destructor called" << std::endl;
}

//========== Copy Constructor ==========//

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

ClapTrap& ClapTrap::operator = (const ClapTrap& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << "Copy assignment operator called" << std::endl;
	this->_name = toAssign._name;
	this->_hitPoints = toAssign._hitPoints;
	this->_energyPoints = toAssign._energyPoints;
	this->_attackDamage = toAssign._attackDamage;
	
	return (*this);
}

//========== Get/Set Functions ==========//

void	ClapTrap::setName(std::string name)
{
	if (this->_name.empty())
		this->_name = name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	if (_hitPoints <= 0)
		return ;
	_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	if (_energyPoints <= 0)
		return ;
	_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}


//========== Member Functions ==========//

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		std::cout << BLUE << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage!" RESET << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
		std::cout << this->_name << " couldn't attack because it doesn't have enough HP!" << std::endl;
	if (_energyPoints <= 0)
		std::cout << this->_name << " couldn't attack because it doesn't have enough EP!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << RED << this->_name << " takes " << amount << " points of damage!" RESET << std::endl;
		return ;
	}
	std::cout << this->_name << " couldn't take damage because it ded!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << GREEN << this->_name << " is healed and gains " << amount << " hitpoints!" RESET << std::endl;
		return ;
	}
	if (_hitPoints <= 0)
		std::cout << this->_name << " couldn't attack because it doesn't have enough HP!" << std::endl;
	if (_energyPoints <= 0)
		std::cout << this->_name << " couldn't attack because it doesn't have enough EP!" << std::endl;
}

void	ClapTrap::status(void)
{
	std::cout << BOLD YELLOW<< this->_name << " currently has: " << std::endl;
	std::cout << "Hitpoints:\t" << this->_hitPoints << std::endl;
	std::cout << "Energy points:\t" << this->_energyPoints << std::endl;
	std::cout << "Attack damage:\t" << this->_attackDamage << RESET << std::endl;
}