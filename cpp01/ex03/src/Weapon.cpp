/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/12 14:15:33 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/12 14:16:37 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <string>

Weapon::Weapon(std::string type)
{
	this->type = type;
}