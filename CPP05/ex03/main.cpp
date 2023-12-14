#include <iostream>
#include "header/colors.h"
#include "header/Bureaucrat.h"
#include "header/Intern.h"
#include "header/Form.h"
#include "header/ShrubberyCreationForm.h"
#include "header/RobotomyRequestForm.h"
#include "header/PresidentialPardonForm.h"

int	main()
{
	{
		std::cout << std::endl;
		colornote( PRINT, 2, "TEST1: make becky and intern, make form, sign and execute", ""); 
		Form	*myform = 0;
		try
		{
			Bureaucrat becky("becky", 2);
			std::cout << becky;
			Intern	newbee;
			myform = newbee.makeForm("PresidentialPardonForm", "You");
			std::cout << *myform;
			myform->beSigned(becky);
			// myform->execute(becky);
			becky.executeForm(*myform);
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
		catch(Intern::FormNotFindException e)
		{
			e.badFormName();
		}
		delete myform;
	}
	{
		std::cout << std::endl;
		colornote( PRINT, 2, "TEST2: make becky and intern, make form, sign and execute", ""); 
		Form	*myform = 0;
		try
		{
			Bureaucrat becky("becky", 2);
			std::cout << becky;
			Intern	newbee;
			myform = newbee.makeForm("ShrubberyCreationForm", "Here");
			std::cout << *myform;
			myform->beSigned(becky);
			// myform->execute(becky);
			becky.executeForm(*myform);
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
		catch(Intern::FormNotFindException e)
		{
			e.badFormName();
		}
		delete myform;
	}
	{
		std::cout << std::endl;
		colornote( PRINT, 2, "TEST3: make becky and intern, make form, sign and execute", ""); 
		Form	*myform = 0;
		try
		{
			Bureaucrat becky("becky", 2);
			std::cout << becky;
			Intern	newbee;
			myform = newbee.makeForm("RobotomyRequestForm", "Jappy");
			std::cout << *myform;
			myform->beSigned(becky);
			// myform->execute(becky);
			becky.executeForm(*myform);
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
		catch(Intern::FormNotFindException e)
		{
			e.badFormName();
		}
		delete myform;
	}
	return (0);
}
