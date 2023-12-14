#include "header/main.h"


DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	ScavTrap	scaf(name + "_clap_name");
	FragTrap	frag(name + "_clap_name");
	Name = name;
	HitPoint = frag.getHP();
	EnergyPoint = scaf.getEP();
	AttackDamage = frag.getAD();
	colornote_DT(3, "  DiamondTrap constructor called", *this);
}

DiamondTrap::~DiamondTrap()
{
	colornote_DT(3, "  DiamondTrap destructor called", *this);
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &source)
{
	Name = source.Name;
	HitPoint = source.HitPoint;
	EnergyPoint = source.EnergyPoint;
	AttackDamage = source.AttackDamage;
	colornote(3, "DT Copy assignment operator called", "");
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &source):  ClapTrap(source.ClapTrap::Name), ScavTrap(source.ClapTrap::Name), FragTrap(source.ClapTrap::Name)
{
	*this = source;
	colornote_DT(3, "DiamondTrap copy constructor called", *this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	ClapTrap::takeDamage(amount);
}
	
void	DiamondTrap::beRepaired(unsigned int amount)
{
	ClapTrap::beRepaired(amount);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am "<< Name << ", The base class name is "<< this->ClapTrap::Name << std::endl;
}

std::string	DiamondTrap::getDTName()
{
	return (Name);
}

// to show comment with color (additional)


void	colornote_DT(int color, std::string text, DiamondTrap &dt)
{
	switch(color)
	{
		case 1:
			call_red();
			break ;
		case 2:
			call_green();
			break ;
		case 3:
			call_blue();
			break ;
		default:
			call_white();
	}
	std::cout << text;
	std::cout << " (DTName:" << dt.getDTName() << " HP:" << dt.ClapTrap::getHP() << " EP:" << dt.getEP() << " AD:" << dt.getAD() << ")";
	reset_color();
}
