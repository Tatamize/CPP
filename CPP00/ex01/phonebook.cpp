#include "header/main.h"

PhoneBook::PhoneBook()
{
	next_index = 0;
}

void	PhoneBook::add_contact(std::string text)
{
	std::string	fields[FIELD_NUM] = {"first name", "last name", "nick name", "phone number", "dark_secret"};

	for (int i = 0 ; i < 5 ; i++)
	{
		if (std::cin.eof())
			return ;
		std::cout << "-- What is your \"" << fields[i]  << "\" --" << std::endl;
		std::getline(std::cin, text);
		if (text.empty())
			i-- ;
		else
			temp.set_contact(text, i);
	}
	list_contact[next_index] = temp;
	next_index = (next_index + 1) % 8;
}

void	PhoneBook::print_contact()
{
	std::cout << std::endl;
	for (int i = 0 ; i < 8 ; i++)
	{
		std::cout << i + 1 ;
		std::cout << "|";
		list_contact[i].print_truncated();
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

bool	check_numeric(std::string text)
{
	if (text.empty() || text.length() == 0)
		return (0);
	for (int i = 0 ; text[i] ; i++)
	{
		if (std::isdigit(text[i]) == 0)
			return (0);
	}
	return (1);
}

int		str_atoi(std::string text)
{
	int	value = 0;

	if (text.empty() || text.length() == 0 || !check_numeric(text))
		return (-1);
	for (int i = 0 ; text[i] ; i++)
		value = (10 * value) + (text[i] - 48);
	return (value);
}

void	PhoneBook::search_contact()
{
	if (next_index == 0)
		return ;
	while (1)
	{
		std::string	text;
		if (std::cin.eof())
			break;
		std::cout << "-- Choose the index number --\n";
		std::cin >> text;
		std::cin.ignore();
		if (text.empty())
			continue ;
		int	index = str_atoi(text) - 1;
		if (index < 0 || index > 7)
		{
			std::cout << "!! Bad index !!" << std::endl;;
			continue ; 
		}
		list_contact[index].print_allinfo(index);
		return ;
	}
}
