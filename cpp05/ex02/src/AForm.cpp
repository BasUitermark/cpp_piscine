/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 14:08:40 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/30 15:57:35 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "AForm default constructor called" RESET << std::endl;

	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

//========== Destructors ==========//

AForm::~AForm()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "AForm default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

AForm::AForm(const AForm& toCopy)
: _name(toCopy.getName()), _isSigned(toCopy.getIsSigned()), _gradeToSign(toCopy.getToSign()), _gradeToExecute(toCopy.getToExecute())
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "AForm copy constructor called" RESET << std::endl;
}

//========== Assignment Operator ==========//

AForm& AForm::operator = (const AForm& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "AForm copy assignment operator called" RESET << std::endl;
	this->_isSigned = toAssign._isSigned;
	
	return (*this);
}

//========== Get/Set Operator ==========//

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int	AForm::getToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getToExecute() const
{
	return (this->_gradeToExecute);
}

//========== Stream Operator ==========//

void	AForm::beSigned(Bureaucrat& a)
{
	if (a.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	else
		_isSigned = true;
}

//========== Stream Operator ==========//

std::ostream& operator<<(std::ostream& out, const AForm& toConvert)
{
	out << BOLD "AForm\nName:\t\t\t" << toConvert.getName() << "\nSigned:\t\t\t" << std::boolalpha << toConvert.getIsSigned() << "\nGrade to sign:\t\t" << toConvert.getToSign() << "\nGrade to execute:\t" << toConvert.getToExecute() << std::endl; 
	return (out);
}