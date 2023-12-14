#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap& operator=(const FragTrap &source);
		FragTrap(const FragTrap &source);

		void	highFivesGuys();
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
};

#endif