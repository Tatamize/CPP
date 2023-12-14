#include "header/Dog.h"

Dog::Dog()
{
	_type = "Dog";
	colornote(3, " Dog constructor called", "");
}

Dog::~Dog()
{
	colornote(3, " Dog destructor called", "");
}

Dog&	Dog::operator=(const Dog &source)
{
	if (this == &source)
		return (*this);
	_type = source._type;
	return (*this);
}

Dog::Dog(const Dog &source)
{
	*this = source;
	colornote(3, " Dog constructor(with an argument for copy) called", "");
}


void	Dog::makeSound() const
{
	std::cout << "Vow Wow" << std::endl;
}