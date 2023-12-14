#include "header/Form.h"
#include "header/RobotomyRequestForm.h"
#include <cstdlib> 
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), _target(target)
{
	colornote(3, "RobotomyRequestForm constructor called", "");
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	colornote(3, "RobotomyRequestForm destructor called", "");
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
	this->setSigned(source.getSigned());
	_target = source._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source): Form("RobotomyRequestForm", 72, 45)
{
	*this = source;
	colornote(3, "RobotomyRequestForm copy constructor called", "");
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->checkExecutable(executor);
	// from here the code for execution
	std::srand(std::time(nullptr));
	std::cout << std::endl;
    std::cout << "Gigigigigigi.... gagagagagaga...." << std::endl;
	if (((std::rand()) % 2) == 1)
		 std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		 std::cout << "OMG... " << _target << " robotomy operation failed!" << std::endl;
	std::cout << std::endl;
}
