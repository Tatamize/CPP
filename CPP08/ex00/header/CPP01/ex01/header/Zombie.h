#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce();
		void	set_name(std::string text);

	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif