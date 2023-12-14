#include "header/Form.h"
#include "header/ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	colornote(MEMO, 3, "ShrubberyCreationForm constructor called", "");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	colornote(MEMO, 3, "ShrubberyCreationForm destructor called", "");
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
	this->setSigned(source.getSigned());
	_target = source._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source): Form("ShrubberyCreationForm", 145, 137)
{
	*this = source;
	colornote(MEMO, 3, "ShrubberyCreationForm copy constructor called", "");
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkExecutable(executor);
	// from here the code for execution
	std::string	filename = _target + "_shrubbery";
	std::ofstream ofs(filename, std::ios::app);
	if (!ofs)
		throw(fileErrorException());
	ofs << "          *             *             *         " << std::endl
        << "         * *           * *           * *        " << std::endl
        << "        *   *         *   *         *   *       " << std::endl
		<< "       *     *       *     *       *     *      " << std::endl
		<< "         * *           * *           * *        " << std::endl
		<< "++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
}


