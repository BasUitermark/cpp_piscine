#include "../include/whatever.hpp"
#include <iostream>

int main(void)
{
	int	x = 10;
	int y = 20;

	std::cout << BOLD "|| BEFORE SWAP ||" RESET << std::endl;
	std::cout << BLUE "Value of x:\t" RESET << x << std::endl;
	std::cout << BLUE "Value of y:\t" RESET << y << std::endl;
	::swap(x, y);
	std::cout << BOLD "|| AFTER SWAP ||" RESET << std::endl;
	std::cout << BLUE "Value of x:\t" RESET << x << std::endl;
	std::cout << BLUE "Value of y:\t" RESET << y << std::endl;
	std::cout << std::endl;

	std::cout << BLUE "Smallest number:\t" RESET <<::min(x, y) << std::endl;
	std::cout << BLUE "Biggest number:\t\t" RESET <<::max(x, y) << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << BLUE "a = " RESET << a << BLUE ", b = " RESET << b << std::endl;
	std::cout << BLUE "min( a, b ) = " RESET << ::min( a, b ) << std::endl;
	std::cout << BLUE "max( a, b ) = " RESET << ::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << BLUE "c = " RESET << c << BLUE ", d = " RESET << d << std::endl;
	std::cout << BLUE "min( c, d ) = " RESET << ::min( c, d ) << std::endl;
	std::cout << BLUE "max( c, d ) = " RESET << ::max( c, d ) << std::endl;

	return 0;
}
