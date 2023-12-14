#include <iostream>
#include "header/colors.h"
#include "header/Data.h"
#include "header/serialize.h"

uintptr_t serialize(Data* ptr)
{
	if (ptr == NULL)
		return (0);
	uintptr_t	tempptr = reinterpret_cast<uintptr_t>(ptr);
	return (tempptr);
}

Data* deserialize(uintptr_t raw)
{
	if (raw == 0)
		return (NULL);
	Data* temp = reinterpret_cast<Data*>(raw);
	return (temp);
}

DataB* deserializeB(uintptr_t raw)
{
	if (raw == 0)
		return (NULL);
	DataB* temp = reinterpret_cast<DataB*>(raw);
	return (temp);
}