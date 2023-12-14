#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "colors.h"
# include "AAnimal.h"
# include "Brain.h"

class Cat: public AAnimal
{
	public:
		Cat();
		virtual ~Cat();
		Cat& operator=(const Cat& source);
		Cat(const Cat& source);

		void		makeSound() const;
		std::string	getIdea(int i) const;
		void		printAllIdeas();
		void		setIdea(int i, std::string newidea);

	private:
		Brain		*_catBrain;
};

#endif