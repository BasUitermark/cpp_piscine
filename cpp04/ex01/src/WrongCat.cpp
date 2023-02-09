#include "../include/WrongCat.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "WrongCat default constructor called" RESET << std::endl;
}

//========== Destructor ==========//

WrongCat::~WrongCat()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "WrongCat default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

WrongCat::WrongCat(const WrongCat& toCopy)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "WrongCat copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

WrongCat& WrongCat::operator = (const WrongCat& toAssign)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "WrongCat copy assignment operator called" RESET << std::endl;
	this->setType(toAssign.getType());
	
	return (*this);
}

//========== Member Functions ==========//

void	WrongCat::makeSound() const
{
	std::cout << ITALIC "wu4iM" RESET << std::endl;
}