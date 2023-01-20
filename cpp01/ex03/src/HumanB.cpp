/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 17:47:21 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/20 14:57:17 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB(std::string name)
: name(name)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

const Weapon*	HumanB::getWeapon()
{
	const Weapon*	get = this->weapon;
	return (get);
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
	return;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->getWeapon()->getType() << std::endl;
}