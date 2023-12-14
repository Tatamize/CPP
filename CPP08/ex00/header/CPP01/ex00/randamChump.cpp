#include "header/Zombie.h"

void	randomChump(std::string name)
{
	Zombie* newz = 0;

	colornote(2, "randamChump called", "");
	newz = newZombie(name);
	newz->announce();
	if (newz)
		delete newz;
	colornote(2, "randamChump end", "");
}