#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>
# include "colors.h"

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& source);
		WrongAnimal(const WrongAnimal& source);

		std::string		getType() const;
		void			setType(std::string _types);
		void			makeSound() const;		// not virtual for WrongAnimal

	protected:
		std::string		_type;
};

#endif