#include "header/main.h"

int	main(int argc, char *argv[])
{
	Zombie*	zzz;

	if (argc < 3)
		return (0);
	zzz = zombieHorde(atoi(argv[1]), argv[2]);
	std::cout << "Zombies done!!" << std::endl;
	delete[] zzz;
	return (0);
}
