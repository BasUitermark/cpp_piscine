#include <string>
#include <sstream>
#include <cstdlib>
#include <Zombie.hpp>

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
	std::istringstream(argv[1]) >> N;

	horde = zombieHorde(N, argv[2]);

	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
}
