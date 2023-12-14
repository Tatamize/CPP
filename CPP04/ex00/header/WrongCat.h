#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "colors.h"
# include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat& operator=(const WrongCat& source);
		WrongCat(const WrongCat& source);

		void	makeSound() const;

	private:
};

#endif