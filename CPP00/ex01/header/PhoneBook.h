#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class	PhoneBook
{
	public:
		PhoneBook();
		void	add_contact(std::string	text);
		void	print_contact();
		void	search_contact();

	private:
		Contact	list_contact[8];
		Contact temp;
		int		next_index;
};
#endif