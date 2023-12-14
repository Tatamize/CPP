#ifndef CONTACT_H
# define CONTACT_H
# define FIELD_NUM 5
# define TEXT_SIZE 10
# include "main.h"

class	Contact
{
	public:
		void	set_contact(std::string text, int i);
		void	print_truncated();
		void	print_field(std::string text);
		void	print_allinfo(int i);
		
	private:
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkst_secret;
};

#endif