#include "header/main.h"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (0);
	Zombie* newz = new Zombie[N];

	int		i = 0;
	while (i < N)
	{
		newz[i].set_name(name);
		i++;
	}
	return (newz);
}
