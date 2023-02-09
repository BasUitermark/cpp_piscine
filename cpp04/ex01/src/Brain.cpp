#include "../include/Brain.hpp"
#include "../include/Utility.hpp"
#include <iostream>

//========== Constructors ==========//

Brain::Brain()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Brain default constructor called" RESET << std::endl;
}

//========== Destructor ==========//

Brain::~Brain()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Brain default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Brain::Brain(const Brain& toCopy): Brain(toCopy)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "Brain copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Brain& Brain::operator = (const Brain& toAssign)
{
	if (DEBUG_MESSAGE == 1)
		std::cout << BLUE "Brain copy assignment operator called" RESET << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toAssign._ideas[i];	
	return (*this);
}
