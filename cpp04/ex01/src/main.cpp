#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Utility.hpp"
#include <iostream>

#define	ZOO_SIZE 10

int	main(void)
{
	const Animal* zoo[ZOO_SIZE];

	for (int i = 0; i < ZOO_SIZE; i++)
	{
		if (i < ZOO_SIZE / 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
		std::cout << std::endl;
	}

	for (int i = 0; i < ZOO_SIZE; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}

	const Animal* cat = new Cat;
	std::cout << std::endl;

	const Animal* dog = new Dog;
	std::cout << std::endl;

	delete cat;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	
	// system("leaks IntelligentZoo");
}
