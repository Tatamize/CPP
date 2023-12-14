#include <iostream>
#include "header/colors.h"
#include "header/iter.h"
#include "header/funcs.h"

int	main()
{
	colornote(PRINT, 3, "[TEST with int array]", "");
	{
		int	ia[5] = {1,2,3,4,5};
		std::cout << "ia pointer is " << ia  << " &ia is " << &ia << std::endl;
		std::cout << "The original array is " << ia[0] << " " << ia[1] << " " << ia[2] << " " << ia[3] << " " << ia[4] << std::endl;
		std::cout << "calling to_print... " << std::endl;
		iter(ia, 5, to_print<int>);
		std::cout << "calling to_print_twice... for 3 items " << std::endl;
		iter(ia, 3, to_print_twice);
	}
	std::cout << std::endl;
	colornote(PRINT, 3, "[TEST with double array]", "");
	{
		double da[3] = {2.5, 0.2, 3.3};
		std::cout << "The original array is " << da[0] << " " <<  da[1] << " " << da[2] << std::endl;
		std::cout << "calling to_print... " << std::endl;
		iter(da, 3, to_print<double>);
		std::cout << "calling to_print_twice.... " << std::endl;
		iter(da, 3, to_print_twice);	
	}
	std::cout << std::endl;
	colornote(PRINT, 3, "[TEST with char array]", "");
	{
		char ca[3] = {'a', 'b', 'A'};
		std::cout << "The original array is " << ca[0] << " " <<  ca[1] << " " << ca[2] << std::endl;
		std::cout << "calling to_print... " << std::endl;
		iter(ca, 3, to_print);
		std::cout << "calling to_print_twice... " << std::endl;
		iter(ca, 3, to_print_twice);
	}
	std::cout << std::endl;
	colornote(PRINT, 3, "[TEST with std::string]", "");
	{
		std::string sa[3] = {"hello", "world", "yey"};
		std::cout << "The original array is " << sa[0] << " " <<  sa[1] << " " << sa[2] << std::endl;
		std::cout << "calling  to_print... " << std::endl;
		iter(sa, 3,  to_print);
		std::cout << "calling to_print_twice... " << std::endl;
		iter(sa, 3, to_print_twice);
	}
	return (0);
}


