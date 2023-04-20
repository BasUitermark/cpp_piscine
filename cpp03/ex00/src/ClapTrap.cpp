#include "../include/ClapTrap.hpp"
#include <string>
#include <iostream>

//========== Constructors ==========//

ClapTrap::ClapTrap(std::string name) :_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (DEBUG_MESSAGE)
		std::cout << GREEN "ClapTrap default constructor called" RESET << std::endl;
}

//========== Destructor ==========//

ClapTrap::~ClapTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << RED "ClapTrap destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

ClapTrap::ClapTrap(const ClapTrap& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ClapTrap copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

ClapTrap& ClapTrap::operator = (const ClapTrap& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ClapTrap copy assignment operator called" RESET << std::endl;
	this->_name = toAssign._name;
	this->_hitPoints = toAssign._hitPoints;
	this->_energyPoints = toAssign._energyPoints;
	this->_attackDamage = toAssign._attackDamage;
	
	return (*this);
}

//========== Get/Set Functions ==========//

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	if (hitPoints < 0)
		return ;
	_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints)
{
	if (energyPoints < 0)
		return ;
	_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	if (attackDamage < 0)
		return ;
	_attackDamage = attackDamage;
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

int	ClapTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void)
{
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}


//========== Member Functions ==========//

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			_energyPoints--;
			std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage!" << std::endl;
		}
		else 
			std::cout << this->_name << " couldn't attack because it doesn't have enough EP!" << std::endl;
	}
	else
		std::cout << this->_name << " couldn't attack because it doesn't have enough HP!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
	}
	else 
		std::cout << this->_name << " couldn't take damage because it ded!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			_energyPoints--;
			_hitPoints += amount;
			std::cout << this->_name << " is healed and gains " << amount << " hitpoints!" << std::endl;
		}
		else 
			std::cout << this->_name << " couldn't be repaired because it doesn't have enough EP!" << std::endl;
	}
	else
		std::cout << this->_name << " couldn't be repaired because it doesn't have enough HP!" << std::endl;
}

void	ClapTrap::status(void)
{
	std::cout << BOLD YELLOW<< this->_name << " currently has: " << std::endl;
	std::cout << "Hitpoints:\t" << this->_hitPoints << std::endl;
	std::cout << "Energy points:\t" << this->_energyPoints << std::endl;
	std::cout << "Attack damage:\t" << this->_attackDamage << RESET << std::endl;
}