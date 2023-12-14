#include "header/AAnimal.h"

AAnimal::AAnimal(): _type("AAnimal")
{
	colornote(3, "AAnimal constructor called", "");
}

AAnimal::~AAnimal()
{
	colornote(3, "AAnimal destructor called", "");
}

AAnimal&	AAnimal::operator=(const AAnimal &source)
{
	if (this == &source)
		return (*this);
	_type = source._type;
	return (*this);
}

AAnimal::AAnimal(const AAnimal &source)
{
	colornote(3, "AAnimal constructor(with an argument for copy) called", "");
	*this = source;
}

std::string	AAnimal::getType() const
{
	return(_type);
}

void	AAnimal::setType(std::string	_types)
{
	_type = _types;
}

void	AAnimal::makeSound() const
{
	std::cout << "....." << std::endl;
}