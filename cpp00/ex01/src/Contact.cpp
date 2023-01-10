/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 12:04:38 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/10 16:22:41 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <Contact.hpp>

/* Insert methods */
void	Contact::insertFirstName(std::string input)
{
	firstName = input;
}

void	Contact::insertLastName(std::string input)
{
	lastName = input;
}

void	Contact::insertNickname(std::string input)
{
	nickname = input;
}

void	Contact::insertPhonenumber(std::string input)
{
	phonenumber = input;
}

void	Contact::insertSecret(std::string input)
{
	secret = input;
}

/* Extract methods */
std::string	Contact::getFirstName(void)
{
	return (firstName);
}

std::string	Contact::getLastName(void)
{
	return (lastName);
}

std::string	Contact::getNickname(void)
{
	return (nickname);
}

std::string Contact::getPhonenumber(void)
{
	return (phonenumber);
}

std::string	Contact::getSecret(void)
{
	return (secret);
}