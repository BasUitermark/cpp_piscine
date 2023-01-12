/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/11 22:21:42 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/11 22:44:41 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "\x1b[1mThe memory address of the variable \"brain\" is:\t\t\x1b[0m" << &brain << std::endl;
	std::cout << "\x1b[1mThe memory address held by variable \"stringPTR\" is:\t\x1b[0m" << stringPTR << std::endl;
	std::cout << "\x1b[1mThe memory address held by variable \"stringREF\" is:\t\x1b[0m" << &stringREF << std::endl << std::endl;
	
	std::cout << "\x1b[1mValue of \"brain\" is:\t\t\t\x1b[0m" << brain << std::endl;
	std::cout << "\x1b[1mThe value pointed to by \"stringPTR\" is:\t\x1b[0m" << *stringPTR << std::endl;
	std::cout << "\x1b[1mThe value pointed to by \"stringREF\" is:\t\x1b[0m" << stringREF << std::endl;
}
