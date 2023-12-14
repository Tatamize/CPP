#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "Bureaucrat.h"

class	PresidentialPardonForm: public Form
{
	public:
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& source);
	PresidentialPardonForm(const PresidentialPardonForm &source);

	void	execute(Bureaucrat const &executor);

	private:
	std::string		_target;
};

#endif