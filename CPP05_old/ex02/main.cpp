#include "header/main.h"

int	main()
{
	{
		std::cout << std::endl;
		colornote(2, "test: becky grade 12", ""); // normal grade test
		try
		{
			Bureaucrat becky("becky", 140);
			Bureaucrat supertom("supertom", 5);
			std::cout << becky;

			ShrubberyCreationForm	sform("here");
			std::cout << sform;
			sform.beSigned(becky);
			std::cout << sform;
			sform.execute(supertom);

			std::cout << std::endl;
			RobotomyRequestForm	rform("Some bad luck guy");
			std::cout << rform;
			rform.beSigned(supertom);
			std::cout << rform;
			rform.execute(supertom);

			std::cout << std::endl;
			PresidentialPardonForm pform("You");
			std::cout << pform;
			pform.beSigned(supertom);
			std::cout << pform;
			pform.execute(supertom);
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
		catch(Form::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Form::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
		catch(Form::FormNotSignedException)
		{
			std::cout << "Form is not signed yet!" << std::endl;
		}
		catch(ShrubberyCreationForm::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}

	return (0);
}
