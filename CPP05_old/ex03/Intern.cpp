#include "header/Intern.h"

Intern::Intern()
{
	colornote( PRINT, 3, "Intern constructor called", "");
}

Intern::~Intern()
{
	colornote( PRINT, 3, "Intern destructor called", "");
}

Intern&	Intern::operator=(const Intern& source)
{
	(void)source;
	return (*this);
}

Intern::Intern(const Intern &source)
{
	*this = source;
	colornote( PRINT, 3, "Intern copy constructor called", "");
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	ShrubberyCreationForm	sform(target);
	RobotomyRequestForm		rform(target);
	PresidentialPardonForm	pform(target);

	Form*	newform = 0;

	std::string	formtype[3] = {sform.getName(), rform.getName(), pform.getName()};

	int i;
	for (i = 0 ; i < 3; i++)
	{
		if (name == formtype[i])
			break;
	}

	switch(i)
	{
		case(0):
			newform = new ShrubberyCreationForm(target);
			break;
		case(1):
			newform = new RobotomyRequestForm(target);
			break;
		case(2):
			newform = new PresidentialPardonForm(target);
			break;
		case(3):
			throw(Intern::FormNotFindException());
	}
	return (newform);
}

void	Intern::FormNotFindException::badFormName()
{
	std::cout << "This form name is not valid." << std::endl;
}
