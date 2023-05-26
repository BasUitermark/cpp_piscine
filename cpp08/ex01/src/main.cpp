#include <iostream>
#include <random>
#include "../include/Span.hpp"

int	main(void)
{
	try
	{
		std::cout << BOLD "||ARRAY TOO SMALL||" RESET << std::endl;

		Span sp1 = Span(9);
		sp1.addNumber(4);

		std::cout << BOLD "Shortest span in sp1: " RESET << sp1.shortestSpan() << std::endl;
		std::cout << BOLD "Longest span in sp1: " RESET << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << BOLD "||ARRAY RANDOM NUMBER||" RESET << std::endl;
		Span sp1 = Span(9);
		sp1.addNumber(1);
		sp1.addNumber(4);
		sp1.addNumber(6);
		sp1.addNumber(7);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << BOLD "Shortest span in sp1: " RESET << sp1.shortestSpan() << std::endl;
		std::cout << BOLD "Longest span in sp1: " RESET << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << BOLD "||ARRAY OVERFLOW||" RESET << std::endl;
		Span sp1 = Span(6);
		sp1.addNumber(1);
		sp1.addNumber(4);
		sp1.addNumber(6);
		sp1.addNumber(7);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << BOLD "Shortest span in sp1: " RESET << sp1.shortestSpan() << std::endl;
		std::cout << BOLD "Longest span in sp1: " RESET << sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << BOLD "||ARRAY 10,000 RANDOM NUMBERS W/ ADDNUMBERS||" RESET << std::endl;
		Span sp2 = Span(10000);

		std::srand((unsigned int) time(NULL));

		std::vector<int> randomNumbers;
		for (int i = 0; i < 10000; ++i)
		{
			int randomNum = std::rand();
			randomNumbers.push_back(randomNum);
		}

		sp2.addNumbers(randomNumbers);

		std::cout << BOLD "Shortest span in sp2: " RESET << sp2.shortestSpan() << std::endl;
		std::cout << BOLD "Longest span in sp2: " RESET << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
