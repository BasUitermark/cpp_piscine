/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: buiterma <buiterma@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/26 13:59:55 by buiterma      #+#    #+#                 */
/*   Updated: 2023/01/30 16:20:57 by buiterma      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

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

# define DEBUG_MESSAGE 1

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	
	public:
		//== Constructors/Destructors ==//
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		virtual ~AForm();
		AForm(const AForm& toCopy);
		AForm&	operator = (const AForm& toAssign);

		//== Get/Set Functions ==//

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getToSign() const;
		int			getToExecute() const;

		//== Member Functions ==//

		void	beSigned(Bureaucrat& a);

		//== Exceptions ==//

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

std::ostream& 	operator<<(std::ostream& out, const AForm& toConvert);

#endif