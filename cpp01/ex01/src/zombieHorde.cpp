/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 14:40:36 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 22:15:25 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>
#include <sstream>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie				*horde;
	std::ostringstream	ss;
	std::string			str;

	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		ss << i + 1;
		str = ss.str();
		ss.str("");
		ss.clear();
		horde[i].setName(name + " " + str);
	}
	return(horde);
}