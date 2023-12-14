#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include "colors.h"

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_name(std::string text);

	private:
		std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif