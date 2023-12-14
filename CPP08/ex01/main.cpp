#include <iostream>
#include "header/colors.h"
#include "header/Span.h"

#define RANDOMRANGE 20

int	randomint()
{
	return ((std::rand()) % RANDOMRANGE);
}

int	main()
{
	{
		colornote(PRINT, 2, "TEST0: as subject", "");
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
			std::cout << "The longest span is " << sp.longestSpan() << std::endl;
		}
		catch(Span::oversizeException e)
		{
			std::cout << e.what() << std::endl;
		}
		catch(Span::nospanException e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "TEST1: put 10 random numbers!", ""); // change the number to 10000 during the eval
		try
		{
			Span sp = Span(10);
			std::srand(std::time(nullptr));
			for (int i = 0; i < 10 ; i++)
				sp.addNumber(randomint());
			sp.printAll();									// print all numbers if necessary
			std::cout << "The shortest span is " << sp.shortestSpan() << std::endl;
			std::cout << "The longest span is "<< sp.longestSpan() << std::endl;
		}
		catch(Span::oversizeException e)
		{
			std::cout << e.what() << std::endl;
		}
		catch(Span::nospanException e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
