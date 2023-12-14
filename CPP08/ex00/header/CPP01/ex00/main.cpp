#include "header/Zombie.h"

int	main(void)	// simple test for making instance with entity, and pointer
{
	{
		colornote(3, "test1: making Zombie with entity", "");
		Zombie	zzz;
	}
	std::cout << std::endl;
	{
		colornote(3, "test2: making Zombie with pointer", "");
		Zombie* z = 0;
		z = newZombie("BOB");
		randomChump("BECKY");
		if (z)
			delete z;
	}

	// std::cout << std::endl;
	// {
	// 	colornote(3, "test3: checking copying the name string ", "");
	// 	Zombie	z;
	// 	std::string nametext = "VVVVV";

	// 	colornote(2, "default zombie is declared", "");

	// 	z.set_name(nametext);
	// 	z.announce();
	// 	nametext = "HHHHH"; 											//checking the case of nametext(original) will be changed
	// 	std::cout << "now nametext is " << nametext << "... same.\n"; 	//checking nametext(original)
	// 	z.announce(); 													//checking zombie name is same
	// }
	return (0);
}


// int	main(int argc, char *argv[])  // put the names as artuments. it makes many zombies!!!
// {
// 	if (argc == 1)
// 		return (0);
// 	if (argc > 1)
// 	{
// 		for (int i = 1; argv[i]; i++)
// 			randomChump(argv[i]);
// 	}

// 	return (0);
// }