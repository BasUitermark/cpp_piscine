/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 13:49:20 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 13:57:13 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat	Eddie("Eddie", 150);
	// Bureaucrat	Fred("Fred", 151);
	Bureaucrat Sarah("Sarah", 1);
	// Bureaucrat Hilary("Hilary", 0);

	// Eddie.decrementGrade();
	// Sarah.incrementGrade();

	std::cout << Sarah << std::endl;
}
