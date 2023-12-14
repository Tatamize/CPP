#include "header/Bureaucrat.h"
#include "header/Form.h"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	_grade = grade;
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	colornote(MEMO, 3, " Bureaucrat constructor called", _name);
}

Bureaucrat::~Bureaucrat()
{
	colornote(MEMO, 3, " Bureaucrat destructor called", _name);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& source)
{
	this->_grade = source._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &source): _name(source._name)
{
	*this = source;
	colornote(MEMO, 3, " Bureaucrat copy constructor called", _name);
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
	if (_grade == 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade -= 1;
}

void	Bureaucrat::downGrade()
{
	if (_grade == 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade += 1;
}

void	Bureaucrat::signForm(Form *f, std::string reason)
{
	if (reason.empty())
		std::cout << _name << " signed " << f->getName() << std::endl;
	else
		std::cout << _name << " couldn’t sign " << f->getName() << " because of " << reason << std::endl;
}

void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException e)
	{
		e.tellTooLow();
	}
	catch(Form::GradeTooHighException e)
	{
		e.tellTooHigh();
	}
	catch(Form::FormNotSignedException)
	{
		std::cout << "Form is not signed yet!" << std::endl;
	}
	catch(Form::fileErrorException e)
	{
		e.tellReason("Error happens during opening or creating a file");
	}
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