#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <algorithm>

template<class T>
bool	easyfind(T t, int i)
{
	typename T::iterator	itr;
	try
	{
		for (itr = t.begin(); itr != t.end(); itr++)	// not necessary : print all elements in container
			std::cout << *itr << std::endl;
		itr = std::find(t.begin(), t.end(), i);
		if (itr == t.end())
			throw std::exception();
		std::cout << std::endl;
		std::cout << *itr << " is found, the " << std::distance(t.begin(), itr) + 1 << "th(st, rd) element"<< std::endl;
		return (1);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << i << " is not found" << std::endl;
		return (0);
	}
}

#endif
