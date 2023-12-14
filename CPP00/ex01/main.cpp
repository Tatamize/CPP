#include "header/main.h"

int	main()
{
	PhoneBook	myphoneb;
	std::string	text;

	while(1)
	{
		if (std::cin.eof())
			return (0);
		std::cout << "-- Choose command: ADD or SEARCH or EXIT --" << std::endl;;
		std::cin >> text;
		std::cin.ignore();
		if (text.compare("ADD") == 0 && !std::cin.eof())
			myphoneb.add_contact(text);		
		else if (text.compare("SEARCH") == 0 && !std::cin.eof())
		{
			myphoneb.print_contact();
			myphoneb.search_contact();
		}
		else if (text.compare("EXIT") == 0 && !std::cin.eof())
			return (0) ;	
	}
	return (0);
}