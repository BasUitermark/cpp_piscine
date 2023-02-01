/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 13:59:55 by buiterma      #+#    #+#                 */
/*   Updated: 2023/02/01 12:41:04 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <string>
# include <exception>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

class Bureaucrat;

/**
 * @param To_sign: 72
 * @param To_execute: 45
 * 
 */
class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;
	
	public:
		//== Constructors/Destructors ==//
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& toCopy);
		RobotomyRequestForm&	operator = (const RobotomyRequestForm& toAssign);

		void	execute(Bureaucrat const& executor) const;
};

#endif