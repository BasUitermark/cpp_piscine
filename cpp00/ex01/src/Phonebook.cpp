/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 11:37:34 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/10 15:14:15 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Colors.hpp>
#include <Phonebook.hpp>

void	Phonebook::addContact(void)
{
	std::string	input;
	int			index;

	if (totalContacts == MAXCONTACTS)
	{
		std::cout << RED "Warning. You are trying to add more than 8 contacts. Adding more will result in overwriting previous entries" RESET << std::endl << std::endl;
		totalContacts = 0;
	}
	index = totalContacts % MAXCONTACTS;
	std::cout << "The simulator will now prompt you to enter some basic information" << std::endl;

	std::cout << "Enter first name:" << std::endl;
	std::getline(std::cin, input);
	Contact[index].insertFirstName(input);

	std::cout << "Enter last name:" << std::endl;
	std::getline(std::cin, input);
	Contact[index].insertLastName(input);

	std::cout << "Enter nickname:" << std::endl;
	std::getline(std::cin, input);
	Contact[index].insertNickname(input);

	std::cout << "Enter deepest secret:" << std::endl;
	std::getline(std::cin, input);
	std::cout << std::endl;
	Contact[index].insertSecret(input);

	std::cout << GREEN "New contact has been added" RESET<< std::endl << std::endl;
	totalContacts += 1;
}
