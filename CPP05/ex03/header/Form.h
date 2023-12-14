#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "colors.h"

class	Bureaucrat;
class	Form
{
	public:
	Form(std::string name, int tosign, int toexecute);
	virtual ~Form();
	Form&	operator=(const Form& source);
	Form(const Form &source);

	std::string	getName() const;
	bool		getSigned() const;
	int			getToSign() const;
	int			getToExecute() const;

	void		setSigned(bool i);
	void		beSigned(Bureaucrat &bc);
	void		checkExecutable(Bureaucrat const &bc) const;
	virtual	void	execute(Bureaucrat const &executor) const = 0;

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
	class	FormNotSignedException
	{
	};
	class	fileErrorException
	{
		public:
			void	tellReason(std::string reason);
	};
};

std::ostream& operator<<(std::ostream &os, const Form &f);
#endif