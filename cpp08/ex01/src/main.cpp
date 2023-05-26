#include <iostream>
#include <random>
#include "../include/Span.hpp"

int	main(void)
{
	Span sp1 = Span(9);
	sp1.addNumber(1);
	sp1.addNumber(4);
	sp1.addNumber(6);
	sp1.addNumber(7);
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

	std::vector<int> randomNumbers;
	for (int i = 0; i < 100; ++i) {
    	int randomNum = distr(gen);
    randomNumbers.push_back(randomNum);
}

	sp2.addNumbers(randomNumbers);

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return 0;
}
