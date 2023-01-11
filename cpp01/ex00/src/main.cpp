/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 10:07:04 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 10:51:12 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main(void)
{
	Zombie	*Zombie;

	randomChump("Chumpy");
	Zombie = newZombie("Zom");

	Zombie->announce();
	delete Zombie;

	return (0);
}
