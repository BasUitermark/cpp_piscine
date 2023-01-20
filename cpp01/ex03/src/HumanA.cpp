/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 14:15:33 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 18:28:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanA.hpp>
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
: name(name), weapon(weapon)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void	HumanA::setWeapon(Weapon& newWeapon)
{
	this->weapon = newWeapon;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}