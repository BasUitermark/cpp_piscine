#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

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
 * @param To_sign: 25
 * @param To_execute: 5
 * 
 */
class PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
	
	public:
		//== Constructors/Destructors ==//
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& toCopy);
		PresidentialPardonForm&	operator = (const PresidentialPardonForm& toAssign);

		void	execute(Bureaucrat const& executor) const;
};

#endif