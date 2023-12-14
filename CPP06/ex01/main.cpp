#include <iostream>
#include "header/colors.h"
#include "header/Data.h"
#include "header/serialize.h"

int	main()
{
	colornote(PRINT,3 ,  "Basic test", "");
	{
		Data newdata;

		uintptr_t	newptr =  serialize(&newdata);

		std::cout << "newdata data size is " << sizeof(newdata) << std::endl;
		std::cout << "newdata pointer value is " << &newdata << std::endl;
		newdata._i = 123;
		std::cout << "i is " << newdata._i << std::endl;
		newdata.hello();

		std::cout << std::endl << "Now make new *remakedata and pass the deserialized pointer" << std::endl;
		Data	*remakedata = deserialize(newptr);
		
		std::cout << "remakedata data size is " << sizeof(*remakedata) << std::endl;
		std::cout << "remakedata pointer value is " << remakedata << std::endl;
		std::cout << "i is " << remakedata->_i << std::endl;
		remakedata->hello();
	}
	std::cout << std::endl;
	colornote(PRINT,3 ,  "Additional test (change Data type by serialization)", "");
	{
		Data newdata;

		uintptr_t	newptr =  serialize(&newdata);

		std::cout << "newdata data size is " << sizeof(newdata) << std::endl;
		std::cout << "newdata pointer value is " << &newdata << std::endl;
		newdata._i = 5;
		newdata._i2 = 77;
		std::cout << "i is " << newdata._i << std::endl;
		std::cout << "i2 is " << newdata._i2 << std::endl;
		newdata.hello();

		std::cout << std::endl << "Now make new *dataB and pass the deserialized pointer" << std::endl;
		DataB	*dataB = deserializeB(newptr);
	
		std::cout << "dataB data size is " << sizeof(*dataB) << std::endl;
		std::cout << "dataB pointer value is " << dataB << std::endl;
		std::cout << "fake_i is " << dataB->_fake_i << std::endl;
		std::cout << "i is " << dataB->_i << std::endl;
		std::cout << "i2 is " << dataB->_i2 << std::endl;

		std::cout << std::endl << "Even the struct size is changed, calling member function works well... funny." << std::endl;
		newdata.hello();
		dataB->hello();
	}
	return (0);
}


