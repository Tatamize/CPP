#include "header/PmergeMe.hpp"
#include "header/tools.hpp"
#include "header/colors.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (error_return("Error: Number arguments are needed."));
	if (argc == 2)
		return (error_return("Error: Nothing to sort."));

	PmergeMe(argc, argv);

	return (0);
}