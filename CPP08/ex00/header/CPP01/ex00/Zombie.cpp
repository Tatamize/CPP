#include "header/Zombie.h"

Zombie::Zombie()
{
	colornote(2, "No name zombie is born", "");
}

Zombie::~Zombie()
{
	colornote(2, " is died", _name);
}

/*Constructor and destructor are not necessary for this subject,
but these are helpful to see when zombie is born and died.
*/

void	Zombie::set_name(std::string text)
{
	_name = text;
	colornote(2, " is his(her) new name", _name);
}

void	Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}