#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Utility.hpp"
#include <iostream>

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	// const Animal* test = new Animal();

	delete j;
	delete i;
	// system("leaks AbstractIntelligentZoo");
}
