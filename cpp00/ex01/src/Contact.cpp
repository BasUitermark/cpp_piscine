/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/10 12:04:38 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/10 14:25:31 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <Contact.hpp>

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

void	Contact::insertSecret(std::string input)
{
	secret = input;
}