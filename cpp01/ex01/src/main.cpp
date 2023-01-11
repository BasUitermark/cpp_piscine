/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 10:07:04 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 15:24:57 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <../include/Zombie.hpp>

bool	isNumber(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
		if (!std::isdigit(input[i]))
			return (false);
	return (true);
}

int main(int argc, char **argv)
{
	int		N;
	Zombie	*horde;

	if (argc != 3 || !isNumber(argv[1]))
		return (EXIT_FAILURE);
	N = std::stoi(argv[1]);

	horde = zombieHorde(N, argv[2]);

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
}
