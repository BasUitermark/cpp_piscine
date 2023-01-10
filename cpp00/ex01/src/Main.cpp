/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 11:33:00 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/10 15:15:27 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Colors.hpp>
#include <Phonebook.hpp>

void	printCurrent(Phonebook Phonebook)
{
	for (int i = 0; i < MAXCONTACTS; i++)
	{
		std::cout << "Index: " << i << std::endl;
		std::cout << Phonebook.Contact[i].firstName << std::endl;
		std::cout << Phonebook.Contact[i].lastName << std::endl;
		std::cout << Phonebook.Contact[i].nickname << std::endl;
		std::cout << Phonebook.Contact[i].secret << std::endl << std::endl;
	}
}

void	initPrompt(void)
{
	std::cout << MAGENTA BOLD "Welcome to 80s Phonebook Simulator 2023" RESET << std::endl << std::endl;

	std::cout << BOLD "Type \"ADD\" to add contacts to your 80s Phonebook!" RESET << std::endl;
	std::cout << BOLD "Type \"SEARCH\" to search your 80s Phoneebook for a contact!" RESET << std::endl;
	std::cout << BOLD "Type \"EXIT\" to exit your 80s Phonebook!" RESET << std::endl << std::endl;
}

int	main(void)
{
	std::string	command;
	Phonebook	Phonebook;
	
	initPrompt();
	while (true)
	{
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			Phonebook.addContact();
		// else if (command.compare("SEARCH") == 0)
		// 	Phonebook.searchContact();
		else if (command.compare("EXIT") == 0)
			break ;
		else if (command.compare("PRINT") == 0)
			printCurrent(Phonebook);
		else
			std::cout << RED "Command not found" RESET << std::endl;
	}
	std::cout << GREEN BOLD "Closing 80s Phonebook Simulator 2023" RESET << std::endl;
	return (EXIT_SUCCESS);
}

/**
 * Phonebook:
 * add a contact
 * search for a contact
 * exit and delete all contacts
 * 
 */