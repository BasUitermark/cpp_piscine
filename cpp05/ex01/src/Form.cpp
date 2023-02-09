#include "../include/Form.hpp"
#include "../include/Bureaucrat.hpp"
#include <iostream>
#include <string>

//========== Constructors ==========//

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Form default constructor called" RESET << std::endl;

	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

//========== Destructors ==========//

Form::~Form()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Form default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Form::Form(const Form& toCopy)
: _name(toCopy.getName()), _isSigned(toCopy.getIsSigned()), _gradeToSign(toCopy.getToSign()), _gradeToExecute(toCopy.getToExecute())
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Form copy constructor called" RESET << std::endl;
}

//========== Assignment Operator ==========//

Form& Form::operator = (const Form& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Form copy assignment operator called" RESET << std::endl;
	this->_isSigned = toAssign._isSigned;
	
	return (*this);
}

//========== Get/Set Operator ==========//

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getIsSigned() const
{
	return (this->_isSigned);
}

int	Form::getToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getToExecute() const
{
	return (this->_gradeToExecute);
}

//========== Stream Operator ==========//

void	Form::beSigned(Bureaucrat& a)
{
	if (a.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		_isSigned = true;
}

//========== Stream Operator ==========//

std::ostream& operator<<(std::ostream& out, const Form& toConvert)
{
	out << BOLD "Form\nName:\t\t\t" << toConvert.getName() << "\nSigned:\t\t\t" << std::boolalpha << toConvert.getIsSigned() << "\nGrade to sign:\t\t" << toConvert.getToSign() << "\nGrade to execute:\t" << toConvert.getToExecute() << std::endl; 
	return (out);
}