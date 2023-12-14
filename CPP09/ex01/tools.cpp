#include <iostream>
#include "header/tools.hpp"

int	error_return(std::string text)
{
	std::cout << text << std::endl;
	return (1);
}

std::string	check_remove_space(std::string txt)
{
	std::string newtxt;

	for (size_t i = 0; i < txt.length(); i++)
	{
		if (i % 2 == 0)
		{
			if (txt[i] == ' ')
				exit (error_return("Error: space position is wrong"));
			newtxt.append(1, txt[i]);
		}
		if (i % 2 == 1 && txt[i] != ' ')
			exit (error_return("Error: wrong charactor or number"));
	}
	return (newtxt);
}
