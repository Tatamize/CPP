#include "header/colors.h"

int	main()
{
	std::string 	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str; //reference deflaration always needs initializer

	colornote(2, "memory address", "");
	std::cout << &str << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << "\n";

	colornote(2, "the value", "");
	std::cout << str << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
	return (0);
}
