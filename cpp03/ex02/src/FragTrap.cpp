#include "../include/FragTrap.hpp"
#include <iostream>

//========== Constructors ==========//

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	if (DEBUG_MESSAGE)
		std::cout << GREEN "FragTrap constructor called" RESET << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

//========== Destructor ==========//

FragTrap::~FragTrap()
{
	if (DEBUG_MESSAGE)
		std::cout << RED "FragTrap destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

FragTrap::FragTrap(const FragTrap& toCopy): ClapTrap(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "FragTrap copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

FragTrap& FragTrap::operator = (const FragTrap& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "FragTrap copy assignment operator called" RESET << std::endl;
	this->_name = toAssign._name;
	this->_hitPoints = toAssign._hitPoints;
	this->_energyPoints = toAssign._energyPoints;
	this->_attackDamage = toAssign._attackDamage;
	
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << ": \"Can I get a high five guys!?\"" << std::endl;
}