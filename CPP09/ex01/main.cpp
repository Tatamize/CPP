#include "header/RPN.hpp"
#include "header/tools.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)  
		exit (error_return("Error: 1 argument is needed."));

	RPN	calc_RPN(argv[1]);

    return (0);
}