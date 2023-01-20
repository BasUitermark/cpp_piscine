/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 14:15:33 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 19:20:47 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <string>

Weapon::Weapon()
{
	return;
}

Weapon::Weapon(std::string newType): type(newType)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string&	Weapon::getType()
{
	const std::string& ref = this->type;
	return(ref);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
	return;
}