#include "../include/Cat.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

Cat::Cat(): Animal("Cat")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Cat default constructor called" RESET << std::endl;
	catBrain = new Brain();
}

//========== Destructor ==========//

Cat::~Cat()
{
	delete this->catBrain;
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Cat default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Cat::Cat(const Cat& toCopy): Animal(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Cat copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Cat& Cat::operator = (const Cat& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Cat copy assignment operator called" RESET << std::endl;
	this->_type = toAssign._type;
	this->catBrain = new Brain(*toAssign.catBrain);
	
	return (*this);
}

//========== Member Functions ==========//

void	Cat::makeSound() const
{
	std::cout << ITALIC "Mi4uw" RESET << std::endl;
}
