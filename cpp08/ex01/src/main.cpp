#include <iostream>
#include <random>
#include "../include/Span.hpp"

int	main(void)
{
	Span sp1 = Span(5);
	sp1.addNumber(6);
	sp1.addNumber(3);
	sp1.addNumber(17);
	sp1.addNumber(9);
	sp1.addNumber(11);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	Span sp2 = Span(10000);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(0, 40000);

	for (int i = 0; i < 10000; i++)
		sp2.addNumber(distr(gen));

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}
