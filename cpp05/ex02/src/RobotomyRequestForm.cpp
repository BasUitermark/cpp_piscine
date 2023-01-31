/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 15:58:19 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/31 12:46:05 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45) ,_target(target)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "RobotomyRequestForm default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

RobotomyRequestForm::~RobotomyRequestForm()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "RobotomyRequestForm default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& toCopy)
: _target(toCopy._target)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "RobotomyRequestForm copy constructor called" RESET << std::endl;
}

//========== Assignment Operator ==========//

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "RobotomyRequestForm copy assignment operator called" RESET << std::endl;
	this->_target = toAssign._target;
	
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor)
{
	if (!this->getIsSigned())
		throw AForm::NotSignedException();
	if (this->getToExecute() < executor.getGrade())
		throw AForm::GradeTooLowException();
	if (rand() % 2 == 0)
	{
		std::cout << "Robotomy has failed!" << std::endl;
		return ;
	}
	std::cout << ITALIC "*drilling*"
}