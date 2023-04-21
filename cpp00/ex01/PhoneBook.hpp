#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include "Contact.hpp"
class PhoneBook
{
	private:
	int i;
	class Contact TabContacts[8];

	public:
	int	send_to_phbk(class Contact);
	void print_contact();
	int get_index();
	void set_index(int flag);

};

#endif

