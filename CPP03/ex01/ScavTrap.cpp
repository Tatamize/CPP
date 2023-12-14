#include "header/main.h"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	HitPoint = 100;
	EnergyPoint = 50;
	AttackDamage = 20;
	colornote_CT(3, " ScavTrap constructor called", *this);
}

ScavTrap::~ScavTrap()
{
	colornote_CT(3, " ScavTrap destructor called", *this);
}

ScavTrap& ScavTrap::operator=(const ScavTrap &source)
{
	Name = source.Name;
	HitPoint = source.HitPoint;
	EnergyPoint = source.EnergyPoint;
	AttackDamage = source.AttackDamage;
	colornote(3, " ST Copy assignment operator called", "");
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &source): ClapTrap(source.Name)
{
	*this = source;
	colornote_CT(3, " ScavTrap copy constructor called", *this);
}

void	ScavTrap::guardGate()
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't guard the gate !!!", *this);
		return ;
	}
	std::cout << Name << "(ScavTrap) is in Gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't attack !!!", *this);
		return ;
	}
	std::cout << "ScavTrap via ";
	ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap via ";
	ClapTrap::takeDamage(amount);
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't repair !!!", *this);
		return ;
	}
	std::cout << "ScavTrap via ";
	ClapTrap::beRepaired(amount);
}

