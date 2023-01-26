#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>

# define MAXCONTACTS 8

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact		_contacts[MAXCONTACTS];
		int			_totalContacts;

	public:
		Phonebook();
		~Phonebook();

		void	addContact();
		void	searchContact();
};

#endif