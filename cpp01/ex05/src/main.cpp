/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/18 15:37:54 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/18 15:42:07 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>
#include <cstdlib>

int main(int argc, char const *argv[])
{
	Harl annoyingGuy;
	
	if (argc != 2)
		return (EXIT_FAILURE);

	annoyingGuy.complain(argv[1]);
}
