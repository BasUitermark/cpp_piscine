#include "../include/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	if (DEBUG_MESSAGE)
		std::cout << GREEN "ScavTrap constructor called" RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

//========== Destructor ==========//

ScavTrap::~ScavTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << RED "ScavTrap destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

ScavTrap::ScavTrap(const ScavTrap& toCopy): ClapTrap(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ScavTrap copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

ScavTrap& ScavTrap::operator = (const ScavTrap& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Copy assignment operator called" RESET << std::endl;
	this->_name = toAssign._name;
	this->_hitPoints = toAssign._hitPoints;
	this->_energyPoints = toAssign._energyPoints;
	this->_attackDamage = toAssign._attackDamage;
	
	return (*this);
}

//========== Member Functions ==========//

void	ScavTrap::attack(std::string target)
{
	if (_hitPoints > 0)
	{
		if (_energyPoints > 0)
		{
			_energyPoints--;
			std::cout << CYAN << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point of damage!" RESET << std::endl;
		}
		else 
			std::cout << CYAN << this->_name << " couldn't attack because it doesn't have enough EP!" RESET << std::endl;
	}
	else
		std::cout << CYAN << this->_name << " couldn't attack because it doesn't have enough HP!" RESET << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout  << CYAN << this->_name << " is now in Gate Keeper mode." RESET << std::endl;
}