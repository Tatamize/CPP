#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
	public:
		Weapon(std::string weaponname);
		~Weapon();

		const std::string&	getType();
		void		setType(std::string text);

	private:
		std::string	_type;
};

#endif