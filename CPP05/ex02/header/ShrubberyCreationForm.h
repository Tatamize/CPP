#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include <fstream>

class	ShrubberyCreationForm: public Form
{
	public:
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& source);
	ShrubberyCreationForm(const ShrubberyCreationForm &source);

	void	execute(Bureaucrat const &executor) const;

	private:
	std::string		_target;
	
};

#endif