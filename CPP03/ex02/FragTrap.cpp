#include "header/main.h"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
	colornote_CT(3, " FragTrap constructor called", *this);
}

FragTrap::~FragTrap()
{
	colornote_CT(3, " FragTrap destructor called", *this);
}

FragTrap& FragTrap::operator=(const FragTrap &source)
{
	Name = source.Name;
	HitPoint = source.HitPoint;
	EnergyPoint = source.EnergyPoint;
	AttackDamage = source.AttackDamage;
	colornote(3, "ST Copy assignment operator called", "");
	return (*this);
}

FragTrap::FragTrap(const FragTrap &source): ClapTrap(source.Name)
{
	*this = source;
	colornote_CT(3, "FragTrap copy constructor called", *this);
}

void	FragTrap::highFivesGuys()
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't request high fives!!!", *this);
		return ;
	}
	std::cout << Name << "(FragTrap) requests positive high fives Yeeeeey!!!!" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't attack !!!", *this);
		return ;
	}
	std::cout << "FragTrap via ";
	ClapTrap::attack(target);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap via ";
	ClapTrap::takeDamage(amount);
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't repair !!!", *this);
		return ;
	}
	std::cout << "FragTrap via ";
	ClapTrap::beRepaired(amount);
}
