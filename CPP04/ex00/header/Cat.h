#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "colors.h"
# include "Animal.h"

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat& operator=(const Cat& source);
		Cat(const Cat& source);

		void	makeSound() const;

	private:
};

#endif