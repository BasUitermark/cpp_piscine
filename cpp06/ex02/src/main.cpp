#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include "../include/Colors.hpp"
#include <iostream>
#include <chrono>
#include <cstdlib>

Base* generate(void)
{
	int	seed = std::chrono::system_clock::now().time_since_epoch().count();

	std::srand(seed);

	switch (rand() % 3)
	{
		case 0:
			std::cout << "Created new class:\t" << BOLD MAGENTA "\"A\"" RESET << std::endl;
			return (new A());
		case 1:
			std::cout << "Created new class:\t" << BOLD MAGENTA "\"B\"" RESET << std::endl;
			return (new B());
		case 2:
			std::cout << "Created new class:\t" << BOLD MAGENTA "\"C\"" RESET << std::endl;
			return (new C());
		default:
			std::cerr << RED "An error occured while generating a random number" RESET << std::endl;
			return (NULL);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << GREEN "\"A\"" RESET << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << GREEN "\"B\"" RESET << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << GREEN "\"C\"" RESET << std::endl;
	else
		std::cerr << RED "An error occured during dynamic casting a pointer" RESET << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << GREEN "\"A\"" RESET << std::endl;
	}
	catch(std::bad_cast)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << GREEN "\"B\"" RESET << std::endl;
		}
		catch(std::bad_cast)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << GREEN "\"C\"" RESET << std::endl;
			}
			catch(std::bad_cast)
			{
				std::cerr << RED "No type found" RESET << std::endl;
			}
		}
	}
	return ;
}

int main(void)
{
	{
		Base* randomBase = generate();
		std::cout << BOLD "|| POINTER CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(randomBase);
		std::cout << BOLD "|| REFERENCE CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(*randomBase);
		std::cout << std::endl;
		delete randomBase;
	}
	
	{
		Base* randomBase = generate();
		std::cout << BOLD "|| POINTER CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(randomBase);
		std::cout << BOLD "|| REFERENCE CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(*randomBase);
		std::cout << std::endl;
		delete randomBase;
	}

	{
		Base* randomBase = generate();
		std::cout << BOLD "|| POINTER CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(randomBase);
		std::cout << BOLD "|| REFERENCE CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(*randomBase);
		std::cout << std::endl;
		delete randomBase;
	}

	{
		Base* randomBase = new Base;
		std::cout << BOLD "|| POINTER CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(randomBase);
		std::cout << BOLD "|| REFERENCE CAST ||" RESET << std::endl;
		std::cout << "Detected class:\t\t";
		identify(*randomBase);
		std::cout << std::endl;
		delete randomBase;
	}
}
