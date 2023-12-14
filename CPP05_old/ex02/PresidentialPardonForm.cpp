#include "header/PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
	colornote(3, "PresidentialPardonForm constructor called","");
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	colornote(3, "PresidentialPardonForm destructor called", "");
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
	this->setSigned(source.getSigned());
	_target = source._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source): Form("PresidentialPardonForm", 25, 5)
{
	*this = source;
	colornote(3, "PresidentialPardonForm copy constructor called", "");
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	this->checkExecutable(executor);
	// from here the code for execution
    std::cout << _target <<" has been pardoned by Zaphod Beeblebrox." << std::endl;
}
