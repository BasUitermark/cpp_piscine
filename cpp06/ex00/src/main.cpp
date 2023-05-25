#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include "../include/ScalarConverter.hpp"
#include "../include/Colors.hpp"

std::string		ScalarConverter::_str = "";
int				ScalarConverter::_type = 0;
char			ScalarConverter::c = 0;
int				ScalarConverter::i = 0;
long int		ScalarConverter::il = 0;
double			ScalarConverter::d = 0;
float			ScalarConverter::f = 0;

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << RED "Incorrect amout of arguments" RESET << std::endl;
		return (EXIT_FAILURE);
	}

	ScalarConverter::convertLiterals(argv[1]);
}
