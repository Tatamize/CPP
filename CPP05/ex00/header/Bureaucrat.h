#ifndef Bureaucrat_H
# define Bureaucrat_H
# include <iostream>
# include "colors.h"

class	Bureaucrat
{
	public:
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat&	operator=(const Bureaucrat& source);
	Bureaucrat(const Bureaucrat &source);

	int			getGrade() const;
	std::string	getName() const;

	void		upGrade();
	void		downGrade();

	private:
	const std::string	_name;
	int					_grade;

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

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bc);
#endif