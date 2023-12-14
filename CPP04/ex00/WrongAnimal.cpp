#include "header/WrongAnimal.h"

WrongAnimal::WrongAnimal():_type("WrongAnimal")
{
	colornote(3, "WrongAnimal constructor called", "");
}

WrongAnimal::~WrongAnimal()
{
	colornote(3, "WrongAnimal destructor called", "");
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &source)
{
	if (this == &source)
		return (*this);
	_type = source._type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &source)
{
	colornote(3, "WrongAnimal constructor(with an argument for copy) called", "");
	*this = source;
}

std::string	WrongAnimal::getType() const
{
	return(_type);
}

void	WrongAnimal::setType(std::string	_types)
{
	_type = _types;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "..... (by Wrong Animal)" << std::endl;
}