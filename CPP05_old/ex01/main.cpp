#include "header/main.h"

int	main()
{
	{
		std::cout << std::endl;
		colornote(2, "test: becky grade 12", ""); // normal grade test
		try
		{
			Bureaucrat becky("becky", 12);
			std::cout << becky;

			Form	niceform("niceform", 30, 10);
			std::cout << niceform;
			niceform.beSigned(becky);
			std::cout << niceform;
			niceform.beSigned(becky); // trying to sign again
			std::cout << niceform;
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
	}

	{
		std::cout << std::endl;
		colornote(2, "test: becky grade 120", ""); // too low grade test
		try
		{
			Bureaucrat becky("becky", 120);
			std::cout << becky;

			Form	niceform("niceform", 30, 10);
			std::cout << niceform;
			niceform.beSigned(becky);
			std::cout << niceform;
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
	}
	return (0);
}
