#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "colors.h"
# include "Animal.h"
# include "Brain.h"

class Dog: public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog& operator=(const Dog& source);
		Dog(const Dog&	source);

		void		makeSound() const;
		std::string	getIdea(int i) const;
		void		printAll_ideas();
		void		setIdea(int i, std::string newidea);

	private:
		Brain		*_dogBrain;
};

#endif