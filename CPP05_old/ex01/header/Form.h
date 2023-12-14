#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "colors.h"
# include "Bureaucrat.h"

class	Bureaucrat;
class	Form
{
	public:
	Form(std::string name, int tosign, int toexecute);
	~Form();
	Form&	operator=(const Form& source);
	Form(const Form &source);

	
	std::string	getName() const;
	bool		getSigned() const;
	int			getToSign() const;
	int			getToExecute() const;

	void		beSigned(Bureaucrat &bc);

	private:
	const std::string	_name;
	bool				_signed;
	const int			_tosign;
	const int			_toexecute;

	// exception
	public:
	class	GradeTooHighException
	{
		public:
			void	tellTooHigh();
	};
	class	GradeTooLowException
	{
		public:
			void	tellTooLow();
	};
};

std::ostream& operator<<(std::ostream &os, const Form &f);
#endif