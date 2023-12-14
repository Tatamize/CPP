#include "header/Zombie.h"

Zombie* newZombie(std::string name)
{
	Zombie* newz = 0;

	newz = new Zombie;
	newz->set_name(name);
	return (newz) ;
}