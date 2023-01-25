/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 09:50:08 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/25 13:41:01 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
		if (i < ZOO_SIZE)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}

	for (int i = 0; i < ZOO_SIZE; i++)
		delete zoo[i];
}
