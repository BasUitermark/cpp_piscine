/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 11:33:00 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/10 17:02:24 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Colors.hpp>
#include <Phonebook.hpp>

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
		else if (command.compare("SEARCH") == 0)
			Phonebook.searchContact();
		else if (command.compare("EXIT") == 0)
			break ;
		else
			std::cout << RED "Command not found" RESET << std::endl;
	}
	std::cout << MAGENTA BOLD "Closing 80s Phonebook Simulator 2023" RESET << std::endl;
	return (EXIT_SUCCESS);
}
