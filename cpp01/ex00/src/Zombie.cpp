/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 10:02:03 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 10:53:45 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Zombie.hpp>

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie named: \"" << this->name << "\" created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie named: \"" << this->name << "\" destroyed." << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
