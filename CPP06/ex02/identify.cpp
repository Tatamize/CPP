#include <iostream>
#include "header/colors.h"
#include "header/Base.h"
#include "header/identify.h"

Base*	generate(void)
{
	Base *newbase = 0;
	std::srand(std::time(nullptr));
	int	rand3 = (std::rand()) % 3;
	switch(rand3)
	{
		std::cout << rand3 << std::endl;
		case 0:
			newbase = new A;
			std::cout << "A is made" << std::endl;
			break;
		case 1:
			newbase = new B;
			std::cout << "B is made" << std::endl;
			break;
		case 2:
			newbase = new C;
			std::cout << "C is made" << std::endl;
			break;
	}
	return (newbase);
}

void	identify(Base* p)
{
	A	*classA = dynamic_cast<A*>(p);
	B	*classB = dynamic_cast<B*>(p);
	C	*classC = dynamic_cast<C*>(p);

	if (classA)
		std::cout << "A" << std::endl;
	if (classB)
		std::cout << "B" << std::endl;
	if (classC)
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)(a);
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)(b);
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e)
	{
		;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)(c);
		std::cout << "C" << std::endl;
	}
	catch(std::exception &e)
	{
		;
	}

}