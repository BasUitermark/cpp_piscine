#include <iostream>
#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN BOLD "Zombie default constructor called" RESET << std::endl;
}

Zombie::~Zombie()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED BOLD "Zombie default destructor called" RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << BLUE BOLD << _name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


void	Zombie::setName(std::string name)
{
	if (this->_name.empty())
		this->_name = name;
}