#include <Harl.hpp>
#include <cstdlib>

int main(int argc, char const *argv[])
{
	Harl annoyingGuy;
	
	if (argc != 2)
		return (EXIT_FAILURE);

	annoyingGuy.complain(argv[1]);
}
