#include "../include/easyfind.hpp"

#include <iterator>
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int>			test;
	std::vector<int>::iterator	find;

	test.push_back(20);
	test.push_back(2);
	test.push_back(4);
	test.push_back(16);
	test.push_back(42);
	test.push_back(100);
	test.push_back(9);

	find = easyfind(test, 4);
	std::cout << *find << std::endl;
}