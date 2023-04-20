#include "../include/Animal.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/Utility.hpp"
#include <iostream>

int	main(void)
{
	const Animal*	blank = new Animal();
	const Animal*	i = new Dog();
	const Animal*	j = new Cat();

	const Animal*	test = i;

	const WrongAnimal*	k = new WrongAnimal();
	const WrongAnimal*	l = new WrongCat();

	std::cout << "blank = new Animal" << std::endl;
	std::cout << "Name:\t" << blank->getType() << " " << std::endl;
	blank->makeSound();
	std::cout << "i = new Dog" << std::endl;
	std::cout << "Name:\t" << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << "j = new Cat" << std::endl;
	std::cout << "Name:\t" << j->getType() << " " << std::endl;
	j->makeSound();

	std::cout << "test = i" << std::endl;
	std::cout << "Name:\t" << test->getType() << " " << std::endl;
	test->makeSound();

	std::cout << "k = new WrongAnimal" << std::endl;
	std::cout << "Name:\t" << k->getType() << " " << std::endl;
	k->makeSound();
	std::cout << "l = new WrongCat" << std::endl;
	std::cout << "Name:\t" << l->getType() << " " << std::endl;
	l->makeSound();

	delete(blank);
	delete(i);
	delete(j);
	delete(k);
	delete(l);

	// system("leaks Zoo");
}
