/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 13:50:09 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/01 15:48:59 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <exception>
#include "AForm.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

# define DEBUG_MESSAGE 0

class Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(const Intern& toCopy);
		Intern&	operator = (const Intern& toAssign);

		Form* makeForm(std::string _name, std::string _target);

		class NonExistantParameterException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (RED "The given form name does not exist" RESET);
				}
		};
};

std::ostream& 	operator<<(std::ostream& out, const Intern& toConvert);

#endif