#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phonenumber;
		std::string	_secret;

	public:
		void	insertFirstName(std::string input);
		void	insertLastName(std::string input);
		void	insertNickname(std::string input);
		void	insertPhonenumber(std::string input);
		void	insertSecret(std::string input);

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickname() const;
		std::string	getPhonenumber() const;
		std::string	getSecret() const;
};

#endif