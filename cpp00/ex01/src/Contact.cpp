#include <string>
#include <Contact.hpp>

/* Insert methods */
void	Contact::insertFirstName(std::string input)
{
	_firstName = input;
}

void	Contact::insertLastName(std::string input)
{
	_lastName = input;
}

void	Contact::insertNickname(std::string input)
{
	_nickname = input;
}

void	Contact::insertPhonenumber(std::string input)
{
	_phonenumber = input;
}

void	Contact::insertSecret(std::string input)
{
	_secret = input;
}

/* Extract methods */
std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getPhonenumber(void) const
{
	return (this->_phonenumber);
}

std::string	Contact::getSecret(void) const
{
	return (this->_secret);
}