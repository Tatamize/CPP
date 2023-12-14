#include "header/convert.h"

int	error_return(std::string text)
{
	std::cout << text << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (error_return("Too much or too few arguments."));
	try
	{
		Convert	num(argv[1]);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}


