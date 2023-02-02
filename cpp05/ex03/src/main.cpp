/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 13:49:20 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/02 11:13:08 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
