#include "header/Cat.h"

Cat::Cat()
{
	colornote(3, " Cat constructor called", "");
	_type = "Cat";
	_catBrain = new Brain;
}

Cat::~Cat()
{
	delete _catBrain;
	colornote(3, " Cat destructor called", "");
}

Cat&	Cat::operator=(const Cat &source)
{
	colornote(3, " Cat copy assignment called", "");
	if (this == &source)
		return (*this);
	_type = source._type;
	for (int i = 0 ; i < 100 ; i++)
		setIdea(i, source.getIdea(i));
	return (*this);
}

Cat::Cat(const Cat &source)
{
	colornote(3, " Cat copy constructor called", "");
	_catBrain = new Brain;
	*this = source;
}

void	Cat::makeSound() const
{
	std::cout << "Myaw Myaw" << std::endl;
}

std::string	Cat::getIdea(int i) const
{
	if (i < 0 || i > 99)
		return (0);
	return (_catBrain->getIdea(i));
}

void	Cat::printAll_ideas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!_catBrain->getIdea(i).empty())
			std::cout << i << " " << _catBrain->getIdea(i) << std::endl;
	}
}

void	Cat::setIdea(int i, std::string newidea)
{
	_catBrain->setIdea(i, newidea);
}