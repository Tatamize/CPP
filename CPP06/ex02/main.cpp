#include <iostream>
#include "header/colors.h"
#include "header/Base.h"
#include "header/identify.h"

int	main()
{
	colornote(PRINT, 2 , "Check with pointer", ""); // normal grade test
	Base *base = generate();
	identify(base);
	std::cout << std::endl;
	colornote(PRINT, 2 , "Check with reference", ""); // normal grade test
	
	Base &ref = *base;
	identify(ref);
	
	delete base;
	return (0);
}


