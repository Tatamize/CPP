#ifndef DiamondTRAP_H
# define DiamondTRAP_H

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &source);
		DiamondTrap(const DiamondTrap &source);

		void		whoAmI();
		std::string	getDTName();
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
	std::string	Name;
};

void	colornote_DT(int color, std::string text, DiamondTrap &dt);
#endif