#include "header/main.h"

int	main(int argc, char *argv[])
{
	Harl	AnnoyingClient;
	int	i = 0;
	std::string	str;

	if (argc < 2)
	{
		std::cout << "Please indicate the level\n";
		return (0);
	}
	i++;
	while (argv[i])
	{
		str = argv[i];
		AnnoyingClient.complain(str);
		i++;
	}
	return (0);
}
