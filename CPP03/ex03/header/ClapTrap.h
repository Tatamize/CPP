#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# define MINUS 0
# define PLUS 1

class ClapTrap
{
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& source);
		ClapTrap(const ClapTrap &source);

		std::string	getName();
		int			getHP();
		int			getEP();
		int			getAD();
		void		changeHP(bool positive, unsigned int amount);
		void		changeEP(bool positive, unsigned int amount);
		void		changeAD(bool positive, unsigned int amount);

		void virtual	attack(const std::string &target);
		void virtual	takeDamage(unsigned int amount);
		void virtual	beRepaired(unsigned int amount);

	protected:
		std::string Name;
		int			HitPoint;
		int			EnergyPoint;
		int			AttackDamage;
};

void	colornote_CT(int color, std::string text, ClapTrap &ct);

#endif