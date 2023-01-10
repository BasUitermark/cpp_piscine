#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>

# define MAXCONTACTS 8

class Phonebook
{
	public:
		int		totalContacts;
		Contact newContact;
		Contact	Contact[MAXCONTACTS];

		void	addContact();
		void	searchContact();
};

#endif