#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "colors.h"
# include "Animal.h"

class Dog: public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog& operator=(const Dog& source);
		Dog(const Dog&	source);

		void	makeSound() const;

	private:
};

#endif