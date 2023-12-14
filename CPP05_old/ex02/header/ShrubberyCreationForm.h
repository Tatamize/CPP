#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include <fstream>
# include "Bureaucrat.h"

class	ShrubberyCreationForm: public Form
{
	public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& source);
	ShrubberyCreationForm(const ShrubberyCreationForm &source);

	void	execute(Bureaucrat const &executor);

	private:
	std::string		_target;

	// exception
	public:
	class	fileErrorException
	{
		public:
			void	tellReason(std::string reason);
	};
};

#endif