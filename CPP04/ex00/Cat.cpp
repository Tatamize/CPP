#include "header/Cat.h"

Cat::Cat()
{
	_type = "Cat";
	colornote(3, " Cat constructor called", "");
}

Cat::~Cat()
{
	colornote(3, " Cat destructor called", "");
}

Cat&	Cat::operator=(const Cat &source)
{
	if (this == &source)
		return (*this);
	_type = source._type;
	return (*this);
}

Cat::Cat(const Cat &source)
{
	*this = source;
	colornote(3, " Cat constructor(with an argument for copy) called", "");
}

void	Cat::makeSound() const
{
	std::cout << "Myaw Myaw" << std::endl;
}