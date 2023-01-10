#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	secret;

		void	insertFirstName(std::string input);
		void	insertLastName(std::string input);
		void	insertNickname(std::string input);
		void	insertSecret(std::string input);
};

#endif