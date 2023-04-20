#include "../include/Fixed.hpp"
#include <iostream>

int main(void)
{
	// Subject test
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;
		
		std::cout << Fixed::max( a, b ) << std::endl;
	}

	std::cout << std::endl;
	
	// Own tests
	{
		Fixed a(10.0f);
		Fixed b(5.0f);

		std::cout << a << " + " << b << " = " << a + b << std::endl;
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		std::cout << a << " * " << b << " = " << a * b << std::endl;
		std::cout << a << " / " << b << " = " << a / b << std::endl;

		std::cout << std::endl;

		if (a < b)
			std::cout << "a is lower then b" << std::endl;
		if (b > a)
			std::cout << "b is bigger then a" << std::endl;
		if (a <= b)
			std::cout << "a is lower then or equal to b" << std::endl;
		if (b >= a)
			std::cout << "b is bigger then or equal to a" << std::endl;
		
		std::cout << std::endl;

		if (a == b)
			std::cout << "a equals b" << std::endl;
		else if (a != b)
			std::cout << "a does not equal b" << std::endl;
	}

}
