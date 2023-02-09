#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Utility.hpp"
#include <iostream>

int	main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	i = new Dog();
	const Animal*	j = new Cat();

	const WrongAnimal*	k = new WrongAnimal();
	const WrongAnimal*	l = new WrongCat();

	std::cout << "Name:\t" << meta->getType() << " " << std::endl;
	std::cout << "Name:\t" << i->getType() << " " << std::endl;
	std::cout << "Name:\t" << j->getType() << " " << std::endl;
	std::cout << "Name:\t" << k->getType() << " " << std::endl;
	std::cout << "Name:\t" << l->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	k->makeSound();
	l->makeSound();
}
