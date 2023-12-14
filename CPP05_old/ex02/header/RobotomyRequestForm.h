#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "Bureaucrat.h"

class	RobotomyRequestForm: public Form
{
	public:
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& source);
	RobotomyRequestForm(const RobotomyRequestForm &source);

	void	execute(Bureaucrat const &executor);

	private:
	std::string		_target;
};

#endif