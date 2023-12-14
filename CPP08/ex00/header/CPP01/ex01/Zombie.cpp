#include "header/main.h"

Zombie::Zombie()
{
	colornote(2, "Zombie is born", "");
}

Zombie::~Zombie()
{
	colornote(2, " died", name);
}

void	Zombie::set_name(std::string text)
{
	name = text;
	colornote(2, " is his(her) new name", name);
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}