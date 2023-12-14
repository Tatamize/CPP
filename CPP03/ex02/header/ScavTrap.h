#ifndef SCAVTRAP_H
# define SCAVTRAP_H

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap &source);
		ScavTrap(const ScavTrap &source);

		void	guardGate();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
};

#endif