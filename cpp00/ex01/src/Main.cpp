/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 11:33:00 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/10 17:54:27 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Colors.hpp>
#include <Phonebook.hpp>

void	initPrompt(void)
{
	std::cout << MAGENTA BOLD "Welcome to Phonebook Simulator 2023" RESET << std::endl << std::endl;

	std::cout << BOLD "Use the following commands for the best Phonebook Simulator 2023 experience:" RESET << std::endl;
	std::cout << BOLD "Type \"ADD\" to add contacts to your Phonebook" RESET << std::endl;
	std::cout << BOLD "Type \"SEARCH\" to search your Phonebook for a contact" RESET << std::endl;
	std::cout << BOLD "Type \"EXIT\" to exit your Phonebook" RESET << std::endl << std::endl;
}

int	main(void)
{
	std::string	command;
	Phonebook	Phonebook;
	
	initPrompt();
	Phonebook.totalContacts = 0;
	while (true)
	{
		if (std::cin)
			std::getline(std::cin, command);
		else
			exit(0);
		if (command.compare("ADD") == 0)
			Phonebook.addContact();
		else if (command.compare("SEARCH") == 0)
			Phonebook.searchContact();
		else if (command.compare("EXIT") == 0)
			break ;
		else
			std::cout << RED "Command not found" RESET << std::endl;
	}
	std::cout << MAGENTA BOLD "Closing Phonebook Simulator 2023" RESET << std::endl;
	return (EXIT_SUCCESS);
}
