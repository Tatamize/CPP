# include <iostream>
# include "header/colors.h"
# include "header/Bureaucrat.h"
# include "header/Form.h"
# include "header/ShrubberyCreationForm.h"
# include "header/RobotomyRequestForm.h"
# include "header/PresidentialPardonForm.h"

int	main()
{
	{
		std::cout << std::endl;
		colornote(2, "TEST1: becky grade 12 and supertom grade 5, and ShrubberyCreation Form", ""); // normal grade test
		try
		{
			Bureaucrat becky("becky", 12);
			Bureaucrat supertom("supertom", 5);
			std::cout << becky;
			std::cout << supertom;
			ShrubberyCreationForm	sform("here");
			std::cout << sform;
			sform.beSigned(becky);
			std::cout << sform;
			sform.execute(supertom);
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
		catch(Form::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}
	{
		std::cout << std::endl;
		colornote(2, "TEST2: becky grade 140 and supertom grade 5, and ShrubberyCreation Form with executeForm", ""); // normal grade test
		try
		{
			Bureaucrat becky("becky", 140);
			Bureaucrat supertom("supertom", 5);
			std::cout << becky;
			std::cout << supertom;
			ShrubberyCreationForm	sform("tree");
			std::cout << sform;
			sform.beSigned(becky);
			std::cout << sform;
			supertom.executeForm(sform);
			becky.executeForm(sform);
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
		catch(Form::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}
	{
		std::cout << std::endl;
		colornote(2, "TEST3: becky grade 140 and supertom grade 5, and RobotomyRequestForm", ""); // normal grade test
		try
		{
			Bureaucrat becky("becky", 140);
			Bureaucrat supertom("supertom", 5);
			std::cout << becky;
			std::cout << supertom;
			RobotomyRequestForm	rform("Some bad luck guy");
			std::cout << rform;
			rform.beSigned(supertom);
			std::cout << rform;
			rform.execute(supertom);
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
		catch(Form::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}
	{
		std::cout << std::endl;
		colornote(2, "TEST4: becky grade 140 and supertom grade 5, and RobotomyRequestForm with executeForm", ""); // normal grade test
		try
		{
			Bureaucrat becky("becky", 140);
			Bureaucrat supertom("supertom", 5);
			std::cout << becky;
			std::cout << supertom;
			RobotomyRequestForm	rform("Some bad luck guy");
			std::cout << rform;
			rform.beSigned(supertom);
			std::cout << rform;
			supertom.executeForm(rform);
			becky.executeForm(rform);
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
		catch(Form::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}
	{
		std::cout << std::endl;
		colornote(2, "TEST5: superbess grade 5, and PresidentialPardonForm", ""); // normal grade test
		try
		{
			Bureaucrat superbess("superbess", 5);
			std::cout << superbess;
			PresidentialPardonForm pform("You");
			std::cout << pform;
			pform.beSigned(superbess);
			std::cout << pform;
			pform.execute(superbess);
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
		catch(Form::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}
	{
		std::cout << std::endl;
		colornote(2, "TEST6: superbess grade 5, and PresidentialPardonForm with executeForm", ""); // normal grade test
		try
		{
			Bureaucrat superbess("superbess", 5);
			std::cout << superbess;
			PresidentialPardonForm pform("You");
			std::cout << pform;
			pform.beSigned(superbess);
			std::cout << pform;
			superbess.executeForm(pform);
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
		catch(Form::fileErrorException e)
		{
			e.tellReason("Error happens during opening or creating a file");
		}
	}
	return (0);
}
