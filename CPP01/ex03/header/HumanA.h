#ifndef HUMANA_H
# define HUMANA_H
# include "main.h"

class	HumanA
{
	public:
		HumanA(std::string	namea, Weapon& newweapon);
		~HumanA();
		void			set_name(std::string namea);
		std::string		get_name();
		const std::string&	getWeapon();
		void			setWeapon(Weapon& newweapon);
		void			attack();

	private:
		Weapon&			_myWeapon;
		std::string		_name;
};

#endif