#include "header/main.h"

ClapTrap::ClapTrap(std::string name): Name(name), HitPoint(10), EnergyPoint(10), AttackDamage(0)
{
	colornote_CT(3, "ClapTrap constructor called", *this);
}

ClapTrap::~ClapTrap()
{
	colornote_CT(3, "ClapTrap destructor called", *this);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &source)
{
	if (this == &source)
		return (*this);
	Name = source.Name;
	HitPoint = source.HitPoint;
	EnergyPoint = source.EnergyPoint;
	AttackDamage = source.AttackDamage;
	colornote(3, "Copy assignment operator called", "");
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	*this = source;
	colornote(3, "Copy constructor called", "");
}

std::string	ClapTrap::getName()
{
	return (Name);
}

int	ClapTrap::getHP()
{
	return (HitPoint);
}

int	ClapTrap::getEP()
{
	return (EnergyPoint);
}

int	ClapTrap::getAD()
{
	return (AttackDamage);
}

void	ClapTrap::changeHP(bool positive, unsigned int amount)
{
	HitPoint += (positive * 2 - 1) * amount;
}

void	ClapTrap::changeEP(bool positive, unsigned int amount)
{
	EnergyPoint += (positive * 2 - 1) * amount;
}

void	ClapTrap::changeAD(bool positive, unsigned int amount)
{
	AttackDamage += (positive * 2 - 1) * amount;
}

void	ClapTrap::attack(const std::string &target)
{
	if (HitPoint <= 0 || EnergyPoint <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't attack !!!", *this);
		return ;
	}
	changeEP(MINUS, 1);
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
	colornote_CT(2, "After this attack ", *this);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	changeHP(MINUS, amount);
	std::cout << "ClapTrap " << Name << " got damage! " << amount << " HP point is lost!" << std::endl;
	colornote_CT(2, "After getting damage ", *this);
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (getHP() <= 0 || getEP() <= 0)
	{
		colornote_CT(1, "!!! No HP or No EP, can't repair !!!", *this);
		return ;
	}
	changeHP(PLUS, amount);
	changeEP(MINUS, 1);
	std::cout << "ClapTrap " << Name << " use repair! " << amount << " HP point is back!" << std::endl;
	colornote_CT(2, "After repairing ", *this);
}


// to show comment and status with color (additional)

void	colornote_CT(int color, std::string text, ClapTrap &ct)
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
	std::cout << " (Name:" << ct.getName() << " HP:" << ct.getHP() << " EP:" << ct.getEP() << " AD:" << ct.getAD() << ")";
	reset_color();
}
