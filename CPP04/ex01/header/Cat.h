#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "colors.h"
# include "Animal.h"
# include "Brain.h"

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat& operator=(const Cat& source);
		Cat(const Cat& source);

		void		makeSound() const;
		std::string	getIdea(int i) const;
		void		printAll_ideas();
		void		setIdea(int i, std::string newidea);

	private:
		Brain		*_catBrain;
};

#endif