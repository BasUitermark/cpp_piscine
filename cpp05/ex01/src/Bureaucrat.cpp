#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include <iostream>

//========== Constructors ==========//

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if(DEBUG_MESSAGE == 1)
		std::cout << GREEN "Bureaucrat default constructor called" RESET << std::endl;
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		_grade = grade;
}

//========== Destructors ==========//

Bureaucrat::~Bureaucrat()
{
	if(DEBUG_MESSAGE == 1)
		std::cout << RED "Bureaucrat default destructor called" RESET << std::endl;
}

//========== Copy Constructor ==========//

Bureaucrat::Bureaucrat(const Bureaucrat& toCopy)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Bureaucrat copy constructor called" RESET << std::endl;
	*this = toCopy;
}

//========== Assignment Operator ==========//

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& toAssign)
{
	if (DEBUG_MESSAGE)
		std::cout << BLUE "Bureaucrat copy assignment operator called" RESET << std::endl;
	this->_grade = toAssign._grade;
	
	return (*this);
}

//========== Stream Operator ==========//

std::ostream& operator<<(std::ostream& out, const Bureaucrat& toConvert)
{
	out << BOLD << toConvert.getName() << ", bureaucrat grade " RESET << toConvert.getGrade();
	return (out);
}

//========== Get/Set Functions ==========//

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

//========== Member Functions ==========//

void	Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw GradeTooLowException();
	else
		_grade++;
}

void	Bureaucrat::signForm(Form& toSign)
{
	try 
	{
		toSign.beSigned(*this);
		std::cout << BOLD GREEN << getName() << " has succesfully signed: " << toSign.getName() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException &sign)
	{
		std::cout << BOLD RED << getName() << " has failed to sign: " << toSign.getName() << RESET << std::endl;
	}
}