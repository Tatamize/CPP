#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "colors.h"

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal& operator=(const Animal& source);
		Animal(const Animal& source);

		std::string		getType() const;
		void			setType(std::string _types);
		void virtual	makeSound() const;

	protected:
		std::string		_type;
};

#endif