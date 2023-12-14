#include "header/Dog.h"

Dog::Dog()
{
	colornote(3, " Dog constructor called", "");
	_type = "Dog";
	_dogBrain = new Brain;
}

Dog::~Dog()
{
	delete _dogBrain;
	colornote(3, " Dog destructor called", "");
}

Dog&	Dog::operator=(const Dog& source)
{
	colornote(3, " Dog copy assignment called", "");
	if (this == &source)
		return (*this);
	_type = source._type;
	for (int i = 0 ; i < 100 ; i++)
		setIdea(i, source.getIdea(i));
	return (*this);
}

Dog::Dog(const Dog &source)
{
	colornote(3, " Dog copy constructor called", "");
	_dogBrain = new Brain;
	*this = source;
}

void	Dog::makeSound() const
{
	std::cout << "Vow Wow" << std::endl;
}

std::string	Dog::getIdea(int i) const
{
	if (i < 0 || i > 99)
		return (0);
	return (_dogBrain->getIdea(i));
}

void	Dog::printAll_ideas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!_dogBrain->getIdea(i).empty())
			std::cout << i << " " << _dogBrain->getIdea(i) << std::endl;
	}
}

void	Dog::setIdea(int i, std::string newidea)
{
	_dogBrain->setIdea(i, newidea);
}