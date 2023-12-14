#include "header/main.h"

int	main()
{
	{
		std::cout << std::endl;
		colornote( PRINT, 2, "test: make becky and intern, make form, sign and execute", ""); 
		Form	*myform = 0;
		try
		{
			Bureaucrat becky("becky", 2);
			std::cout << becky;
			Intern	newbee;
			// myform = newbee.makeForm("ShrubberyCreationForm", "Here");
			// myform = newbee.makeForm("RobotomyRequestForm", "Jappy");
			myform = newbee.makeForm("PresidentialPardonForm", "You");
			std::cout << *myform;
			myform->beSigned(becky);
			myform->execute(becky);
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
		catch(Intern::FormNotFindException e)
		{
			e.badFormName();
		}
		delete myform;
	}
	{
		std::cout << std::endl;
		colornote( PRINT, 2, "test: make becky and intern, make form, sign and execute", ""); 
		Form	*myform = 0;
		try
		{
			Bureaucrat becky("becky", 2);
			std::cout << becky;
			Intern	newbee;
			myform = newbee.makeForm("ShrubberyCreationForm", "Here");
			// myform = newbee.makeForm("RobotomyRequestForm", "Jappy");
			// myform = newbee.makeForm("PresidentialPardonForm", "You");
			std::cout << *myform;
			myform->beSigned(becky);
			myform->execute(becky);
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
		catch(Intern::FormNotFindException e)
		{
			e.badFormName();
		}
		delete myform;
	}
	{
		std::cout << std::endl;
		colornote( PRINT, 2, "test: make becky and intern, make form, sign and execute", ""); 
		Form	*myform = 0;
		try
		{
			Bureaucrat becky("becky", 2);
			std::cout << becky;
			Intern	newbee;
			// myform = newbee.makeForm("ShrubberyCreationForm", "Here");
			myform = newbee.makeForm("RobotomyRequestForm", "Jappy");
			// myform = newbee.makeForm("PresidentialPardonForm", "You");
			std::cout << *myform;
			myform->beSigned(becky);
			myform->execute(becky);
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
		catch(Intern::FormNotFindException e)
		{
			e.badFormName();
		}
		delete myform;
	}
	return (0);
}
