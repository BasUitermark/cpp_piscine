#include <string>
#include <cstdlib>
#include "../include/Zombie.hpp"

bool	isNumber(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
		if (!std::isdigit(input[i]))
			return (false);
	return (true);
}

int main(int argc, char **argv)
{
	int			N;
	std::string	input;
	Zombie		*horde;

	input = argv[1];
	if (argc != 3 || !isNumber(input))
		return (EXIT_FAILURE);

	N = atoi(input.c_str());
	horde = zombieHorde(N, argv[2]);

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
}
