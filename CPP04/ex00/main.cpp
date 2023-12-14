#include "header/main.h"

int	main()
{
	colornote(2, "test as subject", "");
	{
		const Animal* meta = new Animal(); 
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl; 
		i->makeSound(); 		//will output the cat sound! 
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	std::cout <<std::endl;
	colornote(2, "test for WrongAnimal and WrongCat", "");
	{
		const WrongAnimal* meta = new WrongAnimal(); 
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl; 
		i->makeSound();  //will output the animal sound because it is not virtual member function. 
		meta->makeSound();

		delete meta;
		delete i;
	}
	std::cout <<std::endl;
	colornote(2, "test for make and copy classes", "");
	{
		Animal anny;
		anny.makeSound();
		std::cout << "making copy of " << anny.getType() << std::endl;
		Animal copya(anny);
		copya.makeSound();
	}
	std::cout <<std::endl;
	colornote(2, "test for make and copy classes", "");
	{
		Cat	catty;
		catty.makeSound();
		Cat copycat = catty;
		copycat.makeSound();
	}
	return (0);
}
