#include "header/main.h"

int	main()
{
	std::cout <<std::endl;		//test to check memory leaks for Dog and Cat
	{
		colornote(2, "TEST0: just make dog and cat to see the constructor and destructor", "");
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
	}
	std::cout <<std::endl;	//test to copy Brain
	{
		colornote(2, "TEST1: make brain and set Idea, print all _ideas", "");
		Brain newb;
		newb.setIdea(0, "aaaaa");
		newb.setIdea(1, "bbbbb");
		newb.printAll_ideas();
		colornote(2, "make brain copy", "");
		Brain copyb;
		copyb = newb;
		colornote(2, "change _ideas[0] of copy", "");
		copyb.setIdea(0, "something Wrong");
		colornote(2, "print copy", "");
		copyb.printAll_ideas();
		colornote(2, "print original", "");
		newb.printAll_ideas();
	}
	std::cout <<std::endl;	//test to make Animal array and delete
	{
		colornote(2, "TEST2: make 6 animals in an array", "");
		Animal*	gangsters[6];
		gangsters[0] = new Dog();
		gangsters[1] = new Dog();
		gangsters[2] = new Dog();
		gangsters[3] = new Cat();
		gangsters[4] = new Cat();
		gangsters[5] = new Cat();

		std::cout << "Animal gangsters(3 dogs 3 cats) united!" << std::endl;
		gangsters[0]->makeSound();
		gangsters[1]->makeSound();
		gangsters[2]->makeSound();
		gangsters[3]->makeSound();
		gangsters[4]->makeSound();
		gangsters[5]->makeSound();

		for (int i = 0; i < 6; i++)
			delete gangsters[i];
	}
	std::cout <<std::endl;	//test to set idea to some dog and copy it
	{
		colornote(2, "TEST3: set _ideas to a dog", "");
		Dog	dogA;
		dogA.setIdea(0, "hello");
		dogA.setIdea(1, "Vow VoooooooW");
		dogA.printAll_ideas();
		
		colornote(2, "make a copy of dog", ""); 	//test copy dog and check their brains are different
		Dog copyA;
		copyA = dogA;
		copyA.setIdea(2, "I'm a copy!"); // add an idea to copyA
		colornote(2, "after copy, an idea added to the copy, dogA says", "");
		dogA.printAll_ideas();
		colornote(2, "copyA says", "");
		copyA.printAll_ideas();
	}
	std::cout <<std::endl;	//test to set idea to some dog and copy it with copyconstractor
	{
		colornote(2, "TEST4: set _ideas to a dog", "");
		Dog	dogA;
		dogA.setIdea(0, "hello");
		dogA.setIdea(1, "Vow VoooooooW");
		dogA.printAll_ideas();
		
		colornote(2, "make a copy of dog", ""); 	//test copy dog and check their brains are different
		Dog copyA(dogA);
		copyA.setIdea(2, "I'm a copy!"); // add an idea to copyA
		colornote(2, "after copy, an idea added to the copy, dogA says", "");
		dogA.printAll_ideas();
		colornote(2, "copyA says", "");
		copyA.printAll_ideas();
	}
	std::cout <<std::endl;	//test to make a copy of dog
	{
		colornote(2, "TEST5: set _ideas to a cat", "");
		Cat	catA;
		catA.setIdea(0, "I'm Kitty");
		catA.setIdea(1, "Give me fish!");
		catA.printAll_ideas();
		
		colornote(2, "make a copy of cat", ""); 	//test copy cat and check their brains are different
		Cat copyA;
		copyA = catA;
		copyA.setIdea(0, "I'm a Copy super cat!"); // add an idea to copyA
		colornote(2, "after copy, the first idea of copy changed, catA says", "");
		catA.printAll_ideas();
		colornote(2, "copyA says", "");
		copyA.printAll_ideas();
	}
	std::cout <<std::endl;	//test to set idea to some cat and copy it(with another instanciate way)
	{
		colornote(2, "TEST6: set _ideas to a cat", "");
		Cat	catA;
		catA.setIdea(0, "I'm Kitty");
		catA.setIdea(1, "Give me fish!");
		catA.printAll_ideas();
		
		colornote(2, "make a copy of cat with another way", ""); 	//test copy cat and check their brains are different
		Cat copyA = catA;
		copyA.setIdea(0, "I'm a Copy super cat!"); // add an idea to copyA
		colornote(2, "after copy, the first idea of copy changed, catA says", "");
		catA.printAll_ideas();
		colornote(2, "copyA says", "");
		copyA.printAll_ideas();
	}
	return (0);
}
