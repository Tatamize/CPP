#include "header/Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	colornote(3, " Bureaucrat constructor called", _name);
}

Bureaucrat::~Bureaucrat()
{
	colornote(3, " Bureaucrat destructor called", _name);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& source)
{
	this->_grade = source._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &source): _name(source._name)
{
	*this = source;
	colornote(3, " Bureaucrat copy constructor called", _name);
}

int	Bureaucrat::getGrade() const
{
	return(_grade);
}

std::string	Bureaucrat::getName() const
{
	return(_name);
}

void	Bureaucrat::upGrade()
{
	_grade -= 1;
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::downGrade()
{
	_grade += 1;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}


void	Bureaucrat::GradeTooHighException::tellTooHigh()
{
	std::cout << "Grade is too high!" << std::endl;
}

void	Bureaucrat::GradeTooLowException::tellTooLow()
{
	std::cout << "Grade is too low!" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bc)
{
	os << bc.getName() << ", bureaucrat grade "<< bc.getGrade() << std::endl;
	return os;
}