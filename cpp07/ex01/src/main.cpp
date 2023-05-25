#include "../include/iter.hpp"
#include <iostream>

template <typename T>
void	add(T& n)
{
	n += 2;
}

template <typename T>
void	subtract(T& n)
{
	n -= 2;
}

template <typename T>
void	display(T& content)
{
	std::cout << content << std::endl;
}

int main(void)
{
	int		intArray[4] = {1, 2, 3 ,4};
	char	charArray[4] = {'A', 'B', 'C', 'D'};

	std::cout << BOLD "|| BEFORE ADD ||" RESET << std::endl;
	::iter(intArray, 4, display);
	std::cout << BOLD "|| AFTER ADD ||" RESET << std::endl;
	::iter(intArray, 4, add);
	::iter(intArray, 4, display);
	std::cout << BOLD "|| AFTER SUBTRACT ||" RESET << std::endl;
	::iter(intArray, 4, subtract);
	::iter(intArray, 4, display);
	std::cout << std::endl;

	std::cout << BOLD "|| BEFORE ADD ||" RESET << std::endl;
	::iter(charArray, 4, display);
	std::cout << BOLD "|| AFTER ADD ||" RESET << std::endl;
	::iter(charArray, 4, add);
	::iter(charArray, 4, display);
	std::cout << BOLD "|| AFTER SUBSTRACT ||" RESET << std::endl;
	::iter(charArray, 4, subtract);
	::iter(charArray, 4, display);
	std::cout << std::endl;
}
