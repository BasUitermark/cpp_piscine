#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include "../include/Convert.hpp"
#include "../include/Colors.hpp"

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << RED "Too many arguments" RESET << std::endl;
		return (EXIT_FAILURE);
	}
	Convert	newConvert(argv[1]);

	newConvert.convertLiterals();
}
