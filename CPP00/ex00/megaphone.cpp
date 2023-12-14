#include <iostream>

void	printcall(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for (int i = 1 ; i < argc ; i++)
		{
			for (size_t j = 0; j < std::strlen(argv[i]); j++)
				std::cout << (char)std::toupper(argv[i][j]);
			if (i == argc - 1)
				std::cout << std::endl;
		}
	}
}

