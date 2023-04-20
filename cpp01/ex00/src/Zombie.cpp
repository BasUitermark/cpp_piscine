#include <iostream>
#include <Zombie.hpp>

Zombie::Zombie(std::string name)
: _name(name)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN BOLD "Zombie default constructor called" RESET << std::endl;
}

Zombie::~Zombie()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED BOLD << _name << ": Zombie default destructor called" RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << BLUE BOLD << _name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
