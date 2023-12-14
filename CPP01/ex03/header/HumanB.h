#ifndef HUMANB_H
# define HUMANB_H
# include "main.h"

class	HumanB
{
	public:
		HumanB(std::string	nameb);
		~HumanB();
		void			set_name(std::string nameb);
		std::string		get_name();
		const std::string&	getWeapon();
		void			setWeapon(Weapon& newweapon);
		void			attack();

	private:
		Weapon*			_myWeapon;
		std::string		_name;
};
#endif