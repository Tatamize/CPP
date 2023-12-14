#include "header/main.h"

HumanA::HumanA(std::string	namea, Weapon& newweapon): _myWeapon(newweapon)
{
	set_name(namea);
	colornote(2, "HumanA is constructed", "");
}

HumanA::~HumanA()
{
	colornote(2, "HumanA is destructed", "");
}

void	HumanA::set_name(std::string namea)
{
	_name = namea;
}

std::string	HumanA::get_name()
{
	return(_name);
}

const std::string&	HumanA::getWeapon()
{
	return(_myWeapon.getType());
}

void		HumanA::setWeapon(Weapon& newweapon)
{
	_myWeapon = newweapon;
}

void	HumanA::attack()
{
	std::cout << get_name() << " attacks with his(her) " << getWeapon() << "\n";
}
