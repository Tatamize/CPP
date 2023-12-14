#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>
# include "colors.h"

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal& source);
		AAnimal(const AAnimal& source);

		std::string		getType() const;
		void			setType(std::string _types);
		void virtual	makeSound() const = 0;  // abstruct class

	protected:
		std::string		_type;
};

#endif