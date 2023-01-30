/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 15:58:19 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/30 16:04:13 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "PresidentialPardonForm default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

PresidentialPardonForm::~PresidentialPardonForm()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "PresidentialPardonForm default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& toCopy)
: _target(toCopy._target)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PresidentialPardonForm copy constructor called" RESET << std::endl;
}

//========== Assignment Operator ==========//

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PresidentialPardonForm copy assignment operator called" RESET << std::endl;
	this->_isSigned = toAssign._isSigned;
	
	return (*this);
}