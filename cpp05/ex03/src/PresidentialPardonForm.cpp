#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5) ,_target(target)
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
:  Form(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PresidentialPardonForm copy constructor called" RESET << std::endl;
}

//========== Assignment Operator ==========//

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "PresidentialPardonForm copy assignment operator called" RESET << std::endl;
	this->_target = toAssign._target;
	
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (!this->getIsSigned())
		throw Form::NotSignedException();
	if (this->getToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();
	
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}