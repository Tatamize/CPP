#ifndef INTERN_H
# define INTERN_H

class Form;
class	Intern
{
	public:
	Intern();
	~Intern();
	Intern&	operator=(const Intern& source);
	Intern(const Intern &source);

	Form*	makeForm(std::string name, std::string target);

	class	FormNotFindException
	{
		public:
			void	badFormName();
	};
};

#endif