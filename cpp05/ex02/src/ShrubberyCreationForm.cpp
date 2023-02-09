#include "../include/AForm.hpp"
#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

//========== Constructors ==========//

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "ShrubberyCreationForm default constructor called" RESET << std::endl;
}

//========== Destructors ==========//

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "ShrubberyCreationForm default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& toCopy)
: Form(toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ShrubberyCreationForm copy constructor called" RESET << std::endl;
}

//========== Assignment Operator ==========//

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "ShrubberyCreationForm copy assignment operator called" RESET << std::endl;
	this->_target = toAssign._target;

	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	std::ofstream	out(_target + "_shrubbery");

	if (!this->getIsSigned())
		throw Form::NotSignedException();
	if (this->getToExecute() < executor.getGrade())
		throw Form::GradeTooLowException();

	out << "	            ,@@@@@@@,"
    "   ,,,.   ,@@@@@@\\@@,  .oo8888o."
    ",&%%&%&&%,@@@@@\\@@@@@@,8888\\88/8o"
   ",%&/%&&%&&%,@@@\\@@@/@@@88\\88888/88'"
   "%&&%&%&/%&&%@@\\@@/ /@@@88888/88888'"
   "%&&%/ %&%%&&@@\\ V /@@' `88/8 `/88'"
   "`&%\\ ` /%&'    |.|        \\ '|8'"
    "   |o|        | |         | |"
    "   |.|        | |         | |"
    "\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
}