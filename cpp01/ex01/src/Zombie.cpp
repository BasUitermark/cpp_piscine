#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\x1b[32m\x1b[1mBlank zombie created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\x1b[31m\x1b[1mZombie named: \x1b[0m\"" << this->name << "\" destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "\x1b[34m\x1b[1m" << name << "\x1b[0m" << ":\tBraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	if (this->name.empty())
		this->name = name;
}