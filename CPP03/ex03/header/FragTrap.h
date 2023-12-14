#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap& operator=(const FragTrap &source);
		FragTrap(const FragTrap &source);

		void			highFivesGuys();
		void virtual	attack(const std::string &target);
		void virtual	takeDamage(unsigned int amount);
		void virtual	beRepaired(unsigned int amount);

	private:
};

#endif