#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
	Intern	thatIntern;
	Bureaucrat	Steve("Steve", 50);
	Form*	thatForm;

	thatForm = thatIntern.makeForm("urmom", "shrubs");
	Steve.signForm(*thatForm);
	Steve.executeForm(*thatForm);

}
