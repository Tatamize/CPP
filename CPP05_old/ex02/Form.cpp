#include "header/Form.h"

Form::Form(std::string name, int tosign, int toexecute): _name(name), _signed(0), _tosign(tosign), _toexecute(toexecute)
{
	if (tosign > 150 || toexecute > 150)
		throw (Form::GradeTooLowException());
	if (tosign < 1 || toexecute < 1)
		throw (Form::GradeTooHighException());
	colornote(3, " Form constructor called", _name);
}

Form::~Form()
{
	colornote(3, " Form destructor called", _name);
}

Form&	Form::operator=(const Form& source)
{
	_signed = source._signed;
	return (*this);
}

Form::Form(const Form &source): _name(source._name), _signed(source._signed), _tosign(source._tosign), _toexecute(source._toexecute)
{
	*this = source;
	colornote(3, " Form copy constructor called", _name);
}

std::string	Form::getName() const
{
	return(_name);
}

bool	Form::getSigned() const
{
	return(_signed);
}

int	Form::getToSign() const
{
	return(_tosign);
}

int	Form::getToExecute() const
{
	return(_toexecute);
}

void	Form::setSigned(bool i)
{
	if (_signed == 1 && i == 1)
		std::cout << "This form is already signed." << std::endl;
	_signed = i;
}

void	Form::beSigned(Bureaucrat &bc)
{
	if (bc.getGrade() > _tosign)
		throw (Form::GradeTooLowException());
	if (_signed == 1)
		bc.signForm(this, "this form is already signed");
	else
	{
		_signed = 1;
		bc.signForm(this, "");
	}
}

void	Form::checkExecutable(Bureaucrat const &bc)
{
	if (!_signed)
		throw (Form::FormNotSignedException());
	if (bc.getGrade() > _toexecute)
		throw (Form::GradeTooLowException());
}

void	Form::GradeTooHighException::tellTooHigh()
{
	std::cout << "Grade is too high for this Form!" << std::endl;
}

void	Form::GradeTooLowException::tellTooLow()
{
	std::cout << "Grade is too low for this Form!" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Form &f)
{
	os << f.getName() << " [Signed: "<< f.getSigned() << "] [Grade to sign: "<< f.getToSign()<< "] [Grade to execute: "<< f.getToExecute()<< "]" << std::endl;
	return os;
}