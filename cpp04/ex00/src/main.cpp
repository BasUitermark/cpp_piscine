/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:50:08 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 11:00:50 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
