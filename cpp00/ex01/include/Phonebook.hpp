#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <Contact.hpp>

# define MAXCONTACTS 8

class Phonebook
{
	public:
		class Contact	Contact[MAXCONTACTS];
		int		totalContacts;

		void	addContact();
		void	searchContact();
	private:
		class Contact newContact;

};

#endif