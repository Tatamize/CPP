#include "header/WrongCat.h"

WrongCat::WrongCat()
{
	setType("WrongCat");
	colornote(3, " WrongCat constructor called", "");
}

WrongCat::~WrongCat()
{
	colornote(3, " WrongCat destructor called", "");
}

WrongCat&	WrongCat::operator=(const WrongCat &source)
{
	if (this == &source)
		return (*this);
	setType(source.getType());
	return (*this);
}

WrongCat::WrongCat(const WrongCat &source)
{
	*this = source;
	colornote(3, " WrongCat constructor(with an argument) called", "");
}



void	WrongCat::makeSound() const
{
	std::cout << "MMMMMM MMMM MMM" << std::endl;
}