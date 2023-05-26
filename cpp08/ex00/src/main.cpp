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
	test.push_back(16);
	test.push_back(42);
	test.push_back(100);
	test.push_back(9);
	std::vector<int>::iterator firstIndex = easyfind(test, *(test.begin()));

	std::vector<int>	empty;

	try
	{
		find = easyfind(test, 42);
		std::cout << BOLD "||RESULT RANDOM NUMBER IN LIST||" RESET << std::endl;
		std::cout << BLUE "Found number: " RESET << *find << std::endl;
		std::cout << BLUE "Index in container: " RESET << std::distance(firstIndex, find)  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		find = easyfind(test, 16);
		std::cout << BOLD "||RESULT FIRST FOUND INDEX||" RESET << std::endl;
		std::cout << BLUE "Found number: " RESET << *find << std::endl;
		std::cout << BLUE "Index in container: " RESET << std::distance(firstIndex, find)  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		find = easyfind(test, 20);
		std::cout << BOLD "||RESULT FIRST INDEX||" RESET << std::endl;
		std::cout << BLUE "Found number: " RESET << *find << std::endl;
		std::cout << BLUE "Index in container: " RESET << std::distance(firstIndex, find)  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		find = easyfind(test, 9);
		std::cout << BOLD "||RESULT LAST INDEX||" RESET << std::endl;
		std::cout << BLUE "Found number: " RESET << *find << std::endl;
		std::cout << BLUE "Index in container: " RESET << std::distance(firstIndex, find)  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		find = easyfind(test, 5);
		std::cout << BOLD "||RESULT NUMBER NOT IN CONTAINER||" RESET << std::endl;
		std::cout << BLUE "Found number: " RESET << *find << std::endl;
		std::cout << BLUE "Index in container: " RESET << std::distance(firstIndex, find)  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;


	try
	{
		find = easyfind(empty, 5);
		std::cout << BOLD "||RESULT EMPTY CONTAINER||" RESET << std::endl;
		std::cout << BLUE "Found number: " RESET << *find << std::endl;
		std::cout << BLUE "Index in container: " RESET << std::distance(firstIndex, find)  << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}