#include <iostream>
#include <string>
#include <Colors.hpp>
#include <Phonebook.hpp>
#include <Contact.hpp>

Phonebook::Phonebook()
: _totalContacts(0)
{
	
}

Phonebook::~Phonebook()
{
	
}

std::string	getInput(void)
{
	std::string	input;

	if (std::cin)
	{
		std::getline(std::cin, input);
		while (input.empty())
		{
			std::cout << RED "Invalid input. Please try again" RESET << std::endl;
			std::getline(std::cin, input);
		}
		return (input);
	}
	exit(0);
}

void	Phonebook::addContact(void)
{
	std::string	input;
	Contact		newContact;

	if (this->_totalContacts == MAXCONTACTS)
	{
		std::cout << RED "Warning. You are trying to add more than 8 contacts. Overwriting previous entries." RESET << std::endl << std::endl;
		this->_totalContacts = 0;
	}
	std::cout << "The simulator will now prompt you to enter some basic information" << std::endl;

	std::cout << BOLD "Enter first name:" RESET << std::endl;
	input = getInput();
	newContact.insertFirstName(input);

	std::cout << BOLD "Enter last name:" RESET << std::endl;
	input = getInput();
	newContact.insertLastName(input);

	std::cout << BOLD "Enter nickname:" RESET << std::endl;
	input = getInput();
	newContact.insertNickname(input);

	std::cout << BOLD "Enter phonenumber:" RESET << std::endl;
	input = getInput();
	newContact.insertPhonenumber(input);

	std::cout << BOLD "Enter deepest secret:" RESET << std::endl;
	input = getInput();
	std::cout << std::endl;
	newContact.insertSecret(input);

	this->_contacts[_totalContacts % MAXCONTACTS] = newContact;
	std::cout << GREEN "New contact has been added" RESET << std::endl << std::endl;
	_totalContacts++;
}

std::string	fitToColumn(std::string str)
{
	std::string edit;

	if (str.size() > 10)
	{
		edit = str.substr(0, 9);
		edit.append(".");
		return (edit);
	}
	else
	{
		edit.insert(0, str);
		edit.insert(0, 10 - str.length(), ' ');
		return (edit);
	}
}

void	displayPhonebook(Contact* _contacts)
{
	std::string	fittedString;

	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;

	for (int i = 0; i < MAXCONTACTS; i++)
	{
		std::cout << "|         " << i + 1;

		fittedString = fitToColumn(_contacts[i].getFirstName());
		std::cout << "|" << fittedString;

		fittedString = fitToColumn(_contacts[i].getLastName());
		std::cout << "|" << fittedString;

		fittedString = fitToColumn(_contacts[i].getNickname());
		std::cout << "|" << fittedString << "|" << std::endl;
		if (i != 7)
			std::cout << "|__________|__________|__________|__________|" << std::endl;
	}
	std::cout << "|*******************************************|" << std::endl << std::endl;
}

bool	isNumber(std::string input)
{
	for (size_t i = 0; i < input.size(); i++)
		if (!std::isdigit(input[i]))
			return (false);
	return (true);
}

void	displayContact(Contact Contact)
{
	std::cout << BOLD "First Name: \t" RESET << Contact.getFirstName() << std::endl;
	std::cout << BOLD "Last Name: \t" RESET << Contact.getLastName() << std::endl;
	std::cout << BOLD "Nickname: \t" RESET << Contact.getNickname() << std::endl;
	std::cout << BOLD "Phonenumber: \t" RESET << Contact.getPhonenumber() << std::endl;
	std::cout << BOLD "Secret: \t" RESET << Contact.getSecret() << std::endl << std::endl;
}

void	Phonebook::searchContact(void)
{
	int			index = 0;
	std::string	input;

	if (this->_totalContacts == 0)
	{
		std::cout << RED "No contacts found in Phonebook" RESET << std::endl;
		return ;
	}

	displayPhonebook(this->_contacts);

	std::cout << BOLD "Please enter the index of the contact you want display" RESET << std::endl;
	while (true)
	{
		input = getInput();
		if (!isNumber(input))
		{
			std::cout << RED "No valid index found" RESET << std::endl;
			continue ;
		}
		index = std::stoi(input);
		if (index >= 1 && index <= 8 && index <= _totalContacts)
		{
			displayContact(this->_contacts[index - 1]);
			break ;
		}
		std::cout << RED "No valid index found" RESET << std::endl;
	}
}
