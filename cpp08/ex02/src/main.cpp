#include <iostream>
#include <stack>
#include <list>
#include "../include/MutantStack.hpp"

int main(void)
{
	try
	{
		std::cout << BOLD "||MUTANT STACK||" RESET << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << BOLD "Top number in Mutant Stack: " RESET << mstack.top() << std::endl;
		mstack.pop();
		std::cout << BOLD "Number of items in Mutant Stack: " RESET << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		for (int i = 0; it != ite; ++it, i++)
			std::cout << BOLD << i << ": " RESET << *it << std::endl;
		std::stack<int> s(mstack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		std::cout << BOLD "||LIST||" RESET << std::endl;
		std::list<int> lstack;
		lstack.push_back(5);
		lstack.push_back(17);
		std::cout << BOLD "Top number in List: " RESET << lstack.back() << std::endl;
		lstack.pop_back();
		std::cout << BOLD "Number of items in Mutant Stack: " RESET << lstack.size() << std::endl;
		lstack.push_back(3);
		lstack.push_back(5);
		lstack.push_back(737);

		lstack.push_back(0);
		std::list<int>::iterator it = lstack.begin();
		std::list<int>::iterator ite = lstack.end();
		++it;
		--it;
		for (int i = 0; it != ite; ++it, i++)
			std::cout << BOLD << i << ": " RESET << *it << std::endl;
		std::list<int> s(lstack);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
