#include "header/main.h"

HumanB::HumanB(std::string	nameb)
{
	_myWeapon = 0;
	set_name(nameb);
	colornote(2, "HumanB is constructed", "");
}

HumanB::~HumanB()
{
	colornote(2, "HumanB is destructed", "");
}

void	HumanB::set_name(std::string nameb)
{
	_name = nameb;
}

std::string	HumanB::get_name()
{
	return(_name);
}

const std::string&	HumanB::getWeapon()
{
	return(_myWeapon->getType());
}

void		HumanB::setWeapon(Weapon& newweapon)
{
	_myWeapon = &newweapon;
}

void	HumanB::attack()
{
	if (_myWeapon == 0)
		std::cout << get_name() << " No weapon! can't attack..."  << std::endl;
	else
		std::cout << get_name() << " attacks with their " << getWeapon() << std::endl;
}

