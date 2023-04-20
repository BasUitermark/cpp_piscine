#include "../include/WrongAnimal.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

WrongAnimal::WrongAnimal(): _type("WRONG_NAME")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "WrongAnimal default constructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "WrongAnimal default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

WrongAnimal::~WrongAnimal()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "WrongAnimal default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

WrongAnimal::WrongAnimal(const WrongAnimal& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "WrongAnimal copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

WrongAnimal& WrongAnimal::operator = (const WrongAnimal& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "WrongAnimal copy assignment operator called" RESET << std::endl;
	this->_type = toAssign._type;
	
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

//========== Member Functions ==========//

void	WrongAnimal::makeSound() const
{
	std::cout << ITALIC "?ohW" RESET << std::endl;
}