#include "header/main.h"

Weapon::Weapon(std::string weaponname)
{
	setType(weaponname);
	colornote(2, "Weapon is constructed", "");
}

Weapon::~Weapon()
{
	colornote(2, "Weapon is destructed", "");
}

void	Weapon::setType(std::string text)
{
	_type = text;
}

const std::string&	Weapon::getType()
{
	return (this->_type);
}