#include "../include/Dog.hpp"
#include "../include/Utility.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

Dog::Dog(): Animal("Dog")
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Dog default constructor called" RESET << std::endl;
	dogBrain = new Brain();
}

//========== Destructor ==========//

Dog::~Dog()
{
	delete this->dogBrain;
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Dog default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Dog::Dog(const Dog& toCopy): Animal(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Dog copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Dog& Dog::operator = (const Dog& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Dog copy assignment operator called" RESET << std::endl;
	this->_type = toAssign._type;
	this->dogBrain = new Brain(*toAssign.dogBrain);
	
	return (*this);
}

//========== Member Functions ==========//

void	Dog::makeSound() const
{
	std::cout << ITALIC "B0rk b0rk" RESET << std::endl;
}
