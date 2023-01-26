/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 13:50:09 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/26 13:58:27 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

# define BOLD		"\x1b[1m"
# define ITALIC		"\x1b[3m"

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& toCopy);
		Bureaucrat&	operator = (const Bureaucrat& toAssign);

		std::string		getName() const;
		int				getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

		class GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (RED "Grade too high" RESET);
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return (RED "Grade too low" RESET);
				}
		};

};

	std::ostream& 	operator<<(std::ostream& out, const Bureaucrat& toConvert);

#endif