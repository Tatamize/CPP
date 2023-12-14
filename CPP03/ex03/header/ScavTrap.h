#ifndef SCAVTRAP_H
# define SCAVTRAP_H

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap &source);
		ScavTrap(const ScavTrap &source);

		void			guardGate();
		void virtual	attack(const std::string &target);
		void virtual	takeDamage(unsigned int amount);
		void virtual	beRepaired(unsigned int amount);

	private:
};

#endif