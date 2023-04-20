#include "../include/WrongAnimal.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

WrongAnimal::WrongAnimal()
{
	this->_type = RED "WRONG_NAME" RESET;

	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongAnimal default constructor called" << std::endl;
}

//========== Destructors ==========//

WrongAnimal::~WrongAnimal()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << "WrongAnimal default destructor called" << std::endl;
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

//========== Member Functions ==========//

void	WrongAnimal::makeSound() const
{
	std::cout << ITALIC "?ohW" RESET << std::endl;
}