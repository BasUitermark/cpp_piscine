#include "../include/Intern.hpp"
#include "../include/AForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include <iostream>

//========== Constructors ==========//

Intern::Intern()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Intern default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

Intern::~Intern()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Intern default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Intern::Intern(const Intern& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Intern copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Intern& Intern::operator = (const Intern& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Intern copy assignment operator called" RESET << std::endl;
	(void) toAssign;
	
	return (*this);
}

//========== Member Functions ==========//

int	getFormNumber(std::string _name)
{
	size_t 		found;
	std::string	forms[3] = {"PRESIDENTIAL", "ROBOTOMY", "SHRUBBERY"};
	std::string	name;
	name = _name;

	for (size_t i = 0; i < name.length(); i++)
		name[i] = toupper(_name[i]);

	for (int i = 0; i <= 3; i++)
	{
		found = name.find(forms[i]);
		if (found != std::string::npos)
			return (i + 1);
	}
	return (0);
}

Form* Intern::makeForm(std::string _name, std::string _target)
{
	Form*	emptyForm = NULL;
	int		formNumber = getFormNumber(_name);

	switch (formNumber)
	{
		case 1:
			emptyForm = new PresidentialPardonForm(_target);
			break ;
		case 2:
			emptyForm = new RobotomyRequestForm(_target);
			break ;
		case 3:
			emptyForm = new ShrubberyCreationForm(_target);
			break ;
		default:
			throw Intern::NonExistantParameterException();
	}
	std::cout << GREEN BOLD"Intern created " << emptyForm->getName() << RESET << std::endl;
	return (emptyForm);
}
