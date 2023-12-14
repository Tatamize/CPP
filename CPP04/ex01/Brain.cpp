#include "header/main.h"

Brain::Brain()
{
	colornote(3, "  Brain constructor called", "");
}

Brain::~Brain()
{
	colornote(3, "  Brain destructor called", "");
}

Brain&	Brain::operator=(const Brain& source)
{
	if (this == &source)
		return (*this);
	for (int i = 0 ; i < 100 ; i++)
		_ideas[i] = source._ideas[i];
	return (*this);
}

Brain::Brain(const Brain& source)
{
	*this = source;
	colornote(3, "  Brain constructor(with an argument for cop) called", "");
}

std::string	Brain::getIdea(int i)
{
	if (i < 0 || i > 99)
		return (0);
	return (_ideas[i]);
}

void	Brain::printAll_ideas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!_ideas[i].empty())
			std::cout << i << " " << _ideas[i] << std::endl;
	}
}

void	Brain::setIdea(int i, std::string newidea)
{
	if (i < 0 || i > 99)
		return ;
	_ideas[i] = newidea;
}