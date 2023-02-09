#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

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
 * @param To_sign: 145
 * @param To_execute: 137
 * 
 */
class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;
	
	public:
		//== Constructors/Destructors ==//
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& toCopy);
		ShrubberyCreationForm&	operator = (const ShrubberyCreationForm& toAssign);

		void	execute(Bureaucrat const& executor) const;
};

#endif