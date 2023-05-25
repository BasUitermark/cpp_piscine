#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include "Utility.hpp"

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