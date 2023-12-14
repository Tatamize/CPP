#include "header/Animal.h"

Animal::Animal(): _type("Animal")
{
	colornote(3, "Animal constructor called", "");
}

Animal::~Animal()
{
	colornote(3, "Animal destructor called", "");
}

Animal&	Animal::operator=(const Animal &source)
{
	if (this == &source)
		return (*this);
	_type = source._type;
	return (*this);
}

Animal::Animal(const Animal &source)
{
	colornote(3, "Animal constructor(with an argument for copy) called", "");
	*this = source;
}

std::string	Animal::getType() const
{
	return(_type);
}

void	Animal::setType(std::string	_types)
{
	_type = _types;
}

void	Animal::makeSound() const
{
	std::cout << "....." << std::endl;
}