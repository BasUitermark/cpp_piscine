/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 14:40:36 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 15:34:19 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <iostream>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name + " " +std::to_string(i));
	return(horde);
}