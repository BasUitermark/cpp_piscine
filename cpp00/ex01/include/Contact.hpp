#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:
		void	insertFirstName(std::string input);
		void	insertLastName(std::string input);
		void	insertNickname(std::string input);
		void	insertPhonenumber(std::string input);
		void	insertSecret(std::string input);

		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getPhonenumber();
		std::string	getSecret();
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phonenumber;
		std::string	secret;
};

#endif