#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <deque>
#include "header/colors.h"
#include "header/easyfind.h"
#define RANGE 15

int	randomint()				// additional function to get some random value
{
	return ((std::rand()) % RANGE);
}

int	main()
{
	std::srand(std::time(nullptr));
	{
		colornote(PRINT, 2, "Test1: with list", "");

		std::list<int> list;
		for (int i = 0; i < 10 ; i++)
			list.push_back(randomint());
		int res = easyfind(list, 0);
		std::cout << res << std::endl;
	}
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "Test2: with vector", "");

		std::vector<int> vec;
		for (int i = 0; i < 10 ; i++)
			vec.push_back(randomint());
		int res = easyfind(vec, 3);
		std::cout << res << std::endl;
	}
	{
		std::cout << std::endl;
		colornote(PRINT, 2, "Test3: with deque", "");
		std::deque<int> deq;
		for (int i = 0; i < 10 ; i++)
			deq.push_back(randomint());
		int res = easyfind(deq, 2);
		std::cout << res << std::endl;
	}
	return (0);
}

