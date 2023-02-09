#include "../include/Bureaucrat.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat	Frank("Frank", 137);
	Bureaucrat	Phteven("Phteven", 45);
	Bureaucrat	Sarah("Sarah", 5);

	ShrubberyCreationForm	shrubFrank("Garden Frank");
	RobotomyRequestForm		robotPhteven("Robot Phteven");
	PresidentialPardonForm	pardonSarah("Pardon Sarah");

	/*
		Shrubbery: 
			to sign:	145
			to execute:	137 
		Robotomy: 
			to sign:	72
			to execute:	45 
		Pardon: 
			to sign:	25
			to execute:	5 
	*/

	//== Shrubbery: sign succes, execute succes ==//
	Frank.signForm(shrubFrank);
	Frank.executeForm(shrubFrank);
	std::cout << std::endl;

	//== Shrubbery: sign succes, execute fail ==//
	Frank.setGrade(138);
	Frank.signForm(shrubFrank);
	Frank.executeForm(shrubFrank);
	std::cout << std::endl;

	//== Shrubbery: sign fail, execute fail ==//
	Frank.setGrade(146);
	Frank.signForm(shrubFrank);
	Frank.executeForm(shrubFrank);
	std::cout << std::endl;

	// //== Robotomy: sign succes, execute succes ==//
	// Phteven.signForm(robotPhteven);
	// Phteven.executeForm(robotPhteven);
	// std::cout << std::endl;

	// //== Robotomy: sign succes, execute fail ==//
	// Phteven.setGrade(46);
	// Phteven.signForm(robotPhteven);
	// Phteven.executeForm(robotPhteven);
	// std::cout << std::endl;

	// //== Robotomy: sign fail, execute fail ==//
	// Phteven.setGrade(73);
	// Phteven.signForm(robotPhteven);
	// Phteven.executeForm(robotPhteven);
	// std::cout << std::endl;

	// //== Pardon: sign succes, execute succes ==//
	// Sarah.signForm(pardonSarah);
	// Sarah.executeForm(pardonSarah);
	// std::cout << std::endl;

	// //== Pardon: sign succes, execute fail ==//
	// Sarah.setGrade(6);
	// Sarah.signForm(pardonSarah);
	// Sarah.executeForm(pardonSarah);
	// std::cout << std::endl;

	// //== Pardon: sign fail, execute fail ==//
	// Sarah.setGrade(26);
	// Sarah.signForm(pardonSarah);
	// Sarah.executeForm(pardonSarah);
	// std::cout << std::endl;
}
