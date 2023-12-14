#include "header/Bureaucrat.h"

int	main()
{
	{
		colornote(2, "test: becky grade 12", ""); // normal grade test
		try
		{
			
			Bureaucrat becky("becky", 12);
			std::cout << becky;
			becky.upGrade();
			std::cout << becky;
			becky.upGrade();
			std::cout << becky;
			becky.downGrade();
			std::cout << becky;
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
	}
	std::cout << std::endl;
	{
		colornote(2, "test: too low grade", ""); // check too low value for initialization
		try
		{
			Bureaucrat becky("becky", 1000);
			std::cout << becky;
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
	}
	std::cout << std::endl;
	{
		colornote(2, "test: becky grade 1 and upGrade", ""); // check overgrade with local scope
		try
		{
			Bureaucrat becky("becky", 1);
			std::cout << becky;
			becky.upGrade();
			std::cout << becky;
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat *ben = 0;
		colornote(2, "test: ben grade 200 with new", ""); // too low grade test with new
		try
		{
			ben = new Bureaucrat("ben", 200);
			std::cout << *ben;
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
		delete ben;		
	}
	std::cout << std::endl;
	{
		Bureaucrat *ben = 0;	// !! with this case, the pointer must be made before try scope (and delete must be after catch scope) 
		colornote(2, "test: ben grade 1 with new, and try to upGrade", ""); // make ben grade 1 with new, and try to upGrade
		try
		{
			ben = new Bureaucrat("ben", 1);
			std::cout << *ben;
			ben->upGrade();
			std::cout << *ben;
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
		delete ben;			
	}
	{
		colornote(2, "test: copy becky", ""); // make becky and copy to bess
		try
		{
			
			Bureaucrat becky("becky", 12);
			std::cout << becky;
			Bureaucrat bess("bess", 20);
			std::cout << bess;
			bess = becky;
			std::cout << "-- copying becky to bess (but the name is consatnt) --" << std::endl;
			std::cout << bess;
		}
		catch(Bureaucrat::GradeTooLowException e)
		{
			e.tellTooLow();
		}
		catch(Bureaucrat::GradeTooHighException e)
		{
			e.tellTooHigh();
		}
	}
	return (0);
}
