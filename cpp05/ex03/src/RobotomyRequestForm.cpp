#include "../include/AForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <ctime>

//========== Constructors ==========//

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45) ,_target(target)
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
: Form(toCopy)
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

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (verifyExecution(executor))
	{
		std::srand((unsigned int) time(NULL));
		std::cout << ITALIC "*Drilling sounds*" RESET << std::endl;
		if (std::rand() % 2)
			std::cout << this->_target << "'s robotomy has " << RED BOLD "failed!" RESET << std::endl;
		else
			std::cout << this->_target << "'s robotomy has " << GREEN BOLD "succeeded!" RESET << std::endl;
	}
}