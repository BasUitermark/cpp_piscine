/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 10:02:03 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 14:37:52 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "\x1b[32m\x1b[1mZombie named: \x1b[0m\"" << this->name << "\" created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\x1b[31m\x1b[1mZombie named: \x1b[0m\"" << this->name << "\" destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\x1b[34m\x1b[1m" << name << "\x1b[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
