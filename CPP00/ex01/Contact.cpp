#include "header/main.h"

void	Contact::set_contact(std::string text, int i)
{
	switch(i)
	{
		case(0):
			first_name = text;
		case(1):
			last_name = text;
		case(2):
			nick_name = text;
		case(3):
			phone_number = text;
		case(4):
			darkst_secret = text;
	}
}

void	Contact::print_truncated()
{
	for (int i = 0 ; i < 3 ; i++)
	{
		switch(i)
		{
			case(0):
				print_field(first_name);
				break;
			case(1):
				print_field(last_name);
				break;
			case(2):
				print_field(nick_name);
				break;			
		}	
		if (i < 2)
			std::cout << "|";
	}
}

void	Contact::print_field(std::string text)
{
	if (text.length() == 10)
		std::cout << text;
	else if (text.length() < 10)
	{
		std::cout << (std::string(int(TEXT_SIZE - text.length()), ' '));
		std::cout << text;
	}
	else
	{
		text = text.substr(0, TEXT_SIZE - 1);
		std::cout << text << ".";
	}
}

void	Contact::print_allinfo(int i)
{
	if (first_name.empty())
	{
		std::cout << "No data in this moment for "<< i + 1 << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "<Data "<< i + 1 << ">" << std::endl;
	std::cout << "first name    : "<< first_name<< std::endl;
	std::cout << "last_name     : "<< last_name<< std::endl;
	std::cout << "nick name     : "<< nick_name<< std::endl;
	std::cout << "phone number  : "<< phone_number<< std::endl;
	std::cout << "darkst secret : "<< darkst_secret<< std::endl;
	std::cout << std::endl;
}
