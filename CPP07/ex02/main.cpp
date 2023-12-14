#include <iostream>
#include "header/colors.h"
#include "header/Array.h"

int	main()
{
	colornote(PRINT, 2, "[Check the general behavior of empty array]", "");
	int arr[] = {};
	std::cout << "size of empty int array is " << sizeof(arr) << " / [0] is " << arr[0] << std::endl ;
	arr[0] = 100; 	// even the array size is zero, we can access the [0] element!
	std::cout << "size of empty int array is " << sizeof(arr) << " / [0] is " << arr[0] << std::endl  << std::endl ;

	int *a = new int();
	std::cout << "by making with new, *a is " << *a << " *a pointer " << a << std::endl;
	std::cout << "a[0] is " << a[0] << " a[0] pointer is " << &a[0] << std::endl << std::endl;  // By "new", the [0] element becomes 0
	delete a;

	colornote(PRINT, 2, "[TEST1 with empty array]", "");
	{
		try
		{
			Array<int>	newarray;
			std::cout << "Size is " << newarray.size() << std::endl ;
			std::cout << "newarray[0] is "<< newarray[0] << std::endl ;
		}
		catch(std::exception &e)
		{
			if (!strcmp(e.what(), "std::exception"))
				std::cout << "the index number is not correct." << std::endl ;
			else
				std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	colornote(PRINT, 2, "[TEST2 with int array]", "");
	{
		try
		{
			Array<int>	newarray(5);
			newarray[0] = 1;
			newarray[1] = 2;
			newarray[2] = 3;
			newarray[3] = 4;
			newarray[4] = 5;
			newarray.printArray();
			std::cout << "newarray[4] is "<< newarray[4] << std::endl ;
		}
		catch(std::exception &e)
		{
			if (!strcmp(e.what(), "std::exception"))
				std::cout << "the index number is not correct." << std::endl ;
			else
				std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	colornote(PRINT, 2, "[TEST3 with double array]", "");
	{
		try
		{
			Array<double>	newarray(5);
			newarray[0] = 1.1;
			newarray[1] = 2.2;
			newarray[2] = 3.3;
			newarray[3] = 4.4;
			newarray[4] = 5.5;
			newarray.printArray();
			std::cout  << "newarray[3] is " << newarray[3] << std::endl ;
		}
		catch(std::exception &e)
		{
			if (!strcmp(e.what(), "std::exception"))
				std::cout << "the index number is not correct." << std::endl ;
			else
				std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	colornote(PRINT, 2, "[TEST4 with string array]", "");
	{
		try
		{
			Array<std::string>	newarray(3);
			newarray[0] = "hello";
			newarray[1] = "world";
			newarray[2] = "nice day!";
			std::cout << "---printing newarray--- " << std::endl;
			newarray.printArray();

			Array<std::string>	copyarray(newarray);
			std::cout << "---printing copyarray--- " << std::endl;
			copyarray.printArray();
			copyarray[2] = "SOMETHING NEW";
			std::cout << "---after changing copyarray[2], printing copyarray--- " << std::endl;
			copyarray.printArray();

			std::cout << "---printing newarray again--- " << std::endl;
			newarray.printArray();

			std::cout << "Now, accessing to the copyarray[3]" << std::endl;
			std::cout << copyarray[3] << std::endl;
		}
		catch(std::exception &e)
		{
			if (!strcmp(e.what(), "std::exception"))
				std::cout << "the index number is not correct." << std::endl ;
			else
				std::cout << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	return (0);
}


