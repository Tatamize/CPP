#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "colors.h"
# include "AAnimal.h"
# include "Brain.h"

class Dog: public AAnimal
{
	public:
		Dog();
		virtual ~Dog();
		Dog& operator=(const Dog& source);
		Dog(const Dog&	source);

		void		makeSound() const;
		std::string	getIdea(int i) const;
		void		printAllIdeas();
		void		setIdea(int i, std::string newidea);

	private:
		Brain		*_dogBrain;
};

#endif